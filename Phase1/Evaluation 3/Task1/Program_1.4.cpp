#include <iostream>
#include <cstring>
#include <utility>
#include <memory>  
#include <vector>  

using namespace std;

class Employee {
private:
    unique_ptr<int> id;
    unique_ptr<int> age;
    unique_ptr<char[]> name;

public:
    // Constructor
    Employee(int id, int age, const char* name) {
        this->id = make_unique<int>(id);
        this->age = make_unique<int>(age);
        this->name = make_unique<char[]>(strlen(name) + 1);
        strcpy(this->name.get(), name);
    }

    // Move Constructor
    Employee(Employee&& other) noexcept
        : id(std::move(other.id)), age(std::move(other.age)), name(std::move(other.name)) {}

    // Move Assignment Operator
    Employee& operator=(Employee&& other) noexcept {
        if (this != &other) {
            id = std::move(other.id);
            age = std::move(other.age);
            name = std::move(other.name);
        }
        return *this;
    }

    virtual void swap(Employee& other) {
        Employee temp(std::move(other));
        other = std::move(*this);
        *this = std::move(temp);
    }

    friend ostream& operator<<(ostream& os, const Employee& emp);
};

ostream& operator<<(ostream& os, const Employee& emp) {
    os << *emp.id << " " << *emp.age << " " << emp.name.get();
    return os;
}

class Programmer : public Employee {
private:
    vector<string> tasks; 

public:
    // Constructor
    Programmer(int id, int age, const char* name, int taskCount, const string* tasksArray)
        : Employee(id, age, name) {
        tasks.reserve(taskCount);
        for (int i = 0; i < taskCount; ++i) {
            tasks.push_back(tasksArray[i]);  
        }
    }

    // Move Constructor
    Programmer(Programmer&& other) noexcept
        : Employee(std::move(other)), tasks(std::move(other.tasks)) {}

    // Move Assignment Operator
    Programmer& operator=(Programmer&& other) noexcept {
        if (this != &other) {
            Employee::operator=(std::move(other));
            tasks = std::move(other.tasks);
        }
        return *this;
    }

    void swap(Programmer& other) {
        Programmer temp(std::move(other)); 
        other = std::move(*this);          
        *this = std::move(temp);           
    }

    friend ostream& operator<<(ostream& os, const Programmer& prog);
};

ostream& operator<<(ostream& os, const Programmer& prog) {
    os << static_cast<const Employee&>(prog) << " | Tasks: ";
    
    if (prog.tasks.empty()) {
        os << "No tasks available.";  
    } else {
        for (size_t i = 0; i < prog.tasks.size(); ++i) {
            os << prog.tasks[i] << (i < prog.tasks.size() - 1 ? ", " : "");
        }
    }

    return os;
}

int main() {
    const string tasks1[] = {"Code", "Debug", "Test"};
    Programmer p1(101, 30, "Alice", 3, tasks1);

    const string tasks2[] = {"Design", "Develop", "Deploy"};
    Programmer p2(102, 28, "Bob", 3, tasks2);

    const string tasks3[] = {"Research", "Implement", "Test"};
    unique_ptr<Employee> empPtr = make_unique<Programmer>(103, 35, "Charlie", 3, tasks3);

    cout << "Before swapping:" << endl;
    cout << p1 << endl; 
    cout << p2 << endl; 

    p1.swap(p2);

    cout << "After swapping:" << endl;
    cout << p1 << endl; 
    cout << p2 << endl; 

    cout << "Dynamic Programmer assigned to Employee pointer:" << endl;
    Programmer* progPtr = dynamic_cast<Programmer*>(empPtr.get());
    if (progPtr) {
        cout << *progPtr << endl; 
    } else {
        cout << "Not a Programmer!" << endl;
    }

    return 0;
}
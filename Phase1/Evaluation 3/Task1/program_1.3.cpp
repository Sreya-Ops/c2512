#include <iostream>
#include <cstring>
#include <utility>

using namespace std;

// Employee class
class Employee {
private:
    int* id;
    int* age;     
    char* name;

public:
    // Constructor
    Employee(int id, int age, const char* name) {
        this->id = new int(id);                  
        this->age = new int(age);   
        this->name = new char[strlen(name) + 1]; 
        strcpy(this->name, name);
    }

    // Destructor
    virtual ~Employee() {
        delete id;   
        delete age;  
        delete[] name; 
    }

    // Move Constructor
    Employee(Employee&& other) noexcept 
        : id(other.id), age(other.age), name(other.name) {
        other.id = nullptr;
        other.age = nullptr;
        other.name = nullptr; 
    }

    // Move Assignment Operator
    Employee& operator=(Employee&& other) noexcept {
        if (this != &other) {
            delete id;
            delete age;
            delete[] name;

            id = other.id;
            age = other.age;
            name = other.name;

            other.id = nullptr;
            other.age = nullptr;
            other.name = nullptr;
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
    os << *emp.id << " " << *emp.age << " " << emp.name;
    return os;
}

class Programmer : public Employee {
private:
    string* tasks; 
    int taskCount; 

public:
    // Constructor
    Programmer(int id, int age, const char* name, int taskCount, const string* tasks)
        : Employee(id, age, name), taskCount(taskCount) {
        this->tasks = new string[taskCount];
        for (int i = 0; i < taskCount; ++i) {
            this->tasks[i] = tasks[i];
        }
    }

    // Destructor
    ~Programmer() {
        delete[] tasks; 
    }

    // Move Constructor
    Programmer(Programmer&& other) noexcept
        : Employee(std::move(other)), taskCount(other.taskCount), tasks(other.tasks) {
        other.tasks = nullptr; 

    // Move Assignment Operator
    Programmer& operator=(Programmer&& other) noexcept {
        if (this != &other) {
            delete[] tasks;

            Employee::operator=(std::move(other));

            tasks = other.tasks;
            taskCount = other.taskCount;

            other.tasks = nullptr;
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
    for (int i = 0; i < prog.taskCount; ++i) {
        os << prog.tasks[i] << (i < prog.taskCount - 1 ? ", " : "");
    }
    return os;
}

int main() {
    const string tasks1[] = {"Code", "Debug", "Test"};
    Programmer p1(101, 30, "Alice", 3, tasks1);

    const string tasks2[] = {"Design", "Develop", "Deploy"};
    Programmer p2(102, 28, "Bob", 3, tasks2);

    cout << "Before swapping:" << endl;
    cout << p1 << endl; 
    cout << p2 << endl; 

    p1.swap(p2);

    cout << "After swapping:" << endl;
    cout << p1 << endl; 
    cout << p2 << endl; 

    return 0;
}
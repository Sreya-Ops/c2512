/*Create one static object for final-derived class
and call all behaviours
and 
one dynamic object for final-derived class 
and call all behaviours

Define constructors and destructors for all the classes

`Base Class:` Artwork `{field: creator, behavior: display()}`
- `Derived Class 1:` Painting `{field: canvasType, behavior: showcase()}`
- `Derived Class 2:` Sculpture `{field: material, behavior: sculpt()}`
- `Final Derived Class:` MixedMediaArt `{field: blendType, behavior: combine()}`*/ 

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

// Base class
class Artwork {
protected:
    string creator;

public:
    Artwork(const string& creatorName) : creator(creatorName) {
        cout << "Artwork constructor called for creator: " << creator << endl;
    }

    virtual ~Artwork() {
        cout << "Artwork destructor called for creator: " << creator << endl;
    }

    void display() {
        cout << "Displaying Artwork by " << creator << endl;
    }
};

// First derived class
class Painting : virtual public Artwork {
protected:
    string canvasType;

public:
    Painting(const string& creatorName, const string& canvas) 
        : Artwork(creatorName), canvasType(canvas) {
        cout << "Painting constructor called for canvas type: " << canvasType << endl;
    }

    virtual ~Painting() {
        cout << "Painting destructor called for canvas type: " << canvasType << endl;
    }

    void showcase() {
        cout << "Showcasing painting on a " << canvasType << " canvas" << endl;
    }
};
// Second derived class
class Sculpture : virtual public Artwork {
protected:
    string material;

public:
    Sculpture(const string& creatorName, const string& mat) 
        : Artwork(creatorName), material(mat) {
        cout << "Sculpture constructor called for material: " << material << endl;
    }

    virtual ~Sculpture() {
        cout << "Sculpture destructor called for material: " << material << endl;
    }

    void sculpt() {
        cout << "Sculpting with material: " << material << endl;
    }
};

// Derived class that inherits from both Painting and Sculpture
class MixedMediaArt : public Painting, public Sculpture {
protected:
    string blendType;

public:
    MixedMediaArt(const string& creatorName, const string& canvas, const string& mat, const string& blend)
        : Artwork(creatorName), Painting(creatorName, canvas), 
          Sculpture(creatorName, mat), blendType(blend) {
        cout << "MixedMediaArt constructor called for blend type: " << blendType << endl;
    }

    ~MixedMediaArt() {
        cout << "MixedMediaArt destructor called for blend type: " << blendType << endl;
    }

    void combine() {
        cout << "Combining painting on " << canvasType << " with sculpture material "
                  << material << " using " << blendType << endl;
    }
};
int main() {
    MixedMediaArt staticArt("Da Vinci", "Oil", "Marble", "Mixed Techniques");
    staticArt.display();
    staticArt.showcase();
    staticArt.sculpt();
    staticArt.combine();

    MixedMediaArt* dynamicArt = new MixedMediaArt("Michelangelo", "Acrylic", "Bronze", "Fusion Art");
    dynamicArt->display();
    dynamicArt->showcase();
    dynamicArt->sculpt();
    dynamicArt->combine();

    delete dynamicArt;

    return 0;
}
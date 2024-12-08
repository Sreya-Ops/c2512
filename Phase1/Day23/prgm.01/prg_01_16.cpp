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

    ~Artwork() {
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

    ~Painting() {
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

    ~Sculpture() {
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
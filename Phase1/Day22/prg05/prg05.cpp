//ptr to blocks ie array 
#include <iostream>
using namespace std;

int main() {
    int ids[4] = {101, 102, 110, 112}; 
    cout << "\n\nusing element iterator\n";
    for(int e : ids) {
        cout << "element " << e << endl;
    }

    cout << "\n\nusing element iterator [auto type deducer]\n";
    for(auto e : ids) {
        cout << "element " << e << endl;
    }

    cout << "ids=" << ids << endl;
    cout << "addr ids[0]=" << &ids[0] << endl;
    cout << "addr ids[1]=" << &ids[1] << endl;
    cout << "addr ids[2]=" << &ids[2] << endl;
    cout << "addr ids[3]=" << &ids[3] << endl;
    cout << "((int*)(ids+1))-1=" << ((int*)(ids+1))-1 << endl; 
    cout << "((int*)(&ids+1))-1=" << ((int*)(&ids+1))-1 << endl; 

    cout << "value ids[0]=" << ids[0] << endl;
    cout << "value ids[0]=" << *(ids+0) << endl;
    cout << "value ids[0]=" << *(0+ids) << endl;
    cout << "value ids[0]=" << 0[ids] << endl;
    
    cout << "value ids[2]=" << ids[2] << endl;
    cout << "value ids[2]=" << *(ids+2) << endl;
    cout << "value ids[2]=" << *(2+ids) << endl;
    cout << "value ids[2]=" << 2[ids] << endl;

    cout << "//array via pointer to array\n\n";
    int* identifiers = ids; 
    cout << "addr ids[0]=" << &identifiers[0] << endl;
    cout << "addr ids[1]=" << &identifiers[1] << endl;
    cout << "addr ids[2]=" << &identifiers[2] << endl;
    cout << "addr ids[3]=" << &identifiers[3] << endl;

    cout << "value ids[0]=" << identifiers[0] << endl;
    cout << "value ids[1]=" << identifiers[1] << endl;
    cout << "value ids[2]=" << identifiers[2] << endl;
    cout << "value ids[3]=" << identifiers[3] << endl;
    return 0;
}
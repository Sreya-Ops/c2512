//single dynamic mem block, alloc's and dealloc's
#include <iostream>
using namespace std;

int main() {
    int* ptrId = new int {100};
    cout << "addr of dyn mem=" << ptrId << endl;
    cout << "dyn mem=" << *ptrId << endl;

    delete ptrId;
    ptrId = nullptr; 

    return 0;
}

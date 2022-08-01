#include <iostream>
#include "library.h"
using namespace std;

int main() {
    int size;
    library lib;
    cin>>size;
    while (size != -1){

        for (int i = 0; i < size ; ++i) {
            int id;
            cin>>id;
            lib.insert(id);
        }

        int id1,id2;
        cin>>id1>>id2;
        lib.subtreeRootIDSearch(id1,id2);
        lib.clear();
        cin>>size;
    }

    return 0;
}

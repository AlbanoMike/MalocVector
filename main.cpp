#include <iostream>
#include "AddMemory.h"

using namespace std;

int main()
{
    int *vector, size;
    cout << "Size of Vector ! \n";
    cin >> size;
    vector = Aloc(size);
    for(int i =0; i< size; i++){
        vector[i] = i +1;
    }
    show(vector,size);
    return 0;
}

#include <iostream>
#include <stdlib.h>

int* Aloc(int size){
    int * aux;
    aux = (int *) std::malloc(size * sizeof(int));
    return aux;
}
int show(int *vet, int size){
    for(int i =0; i < size; i++){
        printf("%d \n", vet[i]);
    }
}

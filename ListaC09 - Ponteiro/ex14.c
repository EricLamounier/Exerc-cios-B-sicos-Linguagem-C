#include <stdio.h>
#include <stdlib.h>

void preenche(int *arr, int size, int key){
    int i;
    int *ptr; //ponteiro
    ptr = arr; //ponteiro aponta para o primeiro elemento do vetor

    for(i=0;i<size;i++){
        *ptr = key; //cada elemento do vetor eh mudado para o valor da key
        ptr++; //incrementa no endereco de memoria, como eh um endereco

}

int main(){
    int arr[] = {1,2,3,4,5};
    int i;
    int size = sizeof(arr)/sizeof(int);
    preenche(arr, size, 99);

    for(i=0;i<5;i++)
        printf("%d ", arr[i]);
    return 0;
}

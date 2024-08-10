#include <stdio.h>
#include <stdlib.h>

void funct(int *arr, int size, int *maior, int *qnt){
    *maior = arr[0];
    *qnt = 1;
    int i;
    for(i=1;i<size;i++){
        if(arr[i] > *maior){
            *maior = arr[i];
            *qnt = 0;
        }

        if(*maior == arr[i])
            *qnt += 1;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,3,1,2,1,4,5,5,3};//13
    int maior, qnt;
    int size = sizeof(arr)/sizeof(int);
    funct(arr, size, &maior, &qnt);
    printf("Maior: %d\nRepetido %d vezes\n", maior, qnt);
    return 0;
}

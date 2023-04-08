#include <stdio.h>
#include <stdlib.h>

void imprime(int *arr, int size){
    int i;
    int *ptr;
    ptr = arr;
    for(i=0;i<size;i++){
        printf("%d ", *ptr);
        ptr++;
    }
}
int main(){
    int v[] = {1,2,3,4,5,5,6,7,8,-9};
    int size = sizeof(v)/sizeof(int);
    imprime(v, size);
    return 0;
}

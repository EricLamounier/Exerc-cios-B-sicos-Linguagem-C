#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int *v, int size){
    if(size == 0)
        return v[0];
    else
        return v[size] + soma_vetor(v, size-1);
}

int main(){
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(v)/sizeof(int)-1;
    printf("%d\n", soma_vetor(v, size));
    return 0;
}

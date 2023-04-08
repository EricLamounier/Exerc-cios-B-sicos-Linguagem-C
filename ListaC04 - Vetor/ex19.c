#include <stdio.h>

int main(){

    float vet[50];
    int i;

    for(i=0;i<50;i++){
        vet[i] = (i+5*i)%(i+1);
    }

    for(i=0;i<50;i++){

        if(i < 10){
            if(vet[i] < 10)
                printf("[0%d]: 0%.f | ", i, vet[i]);
            else
                printf("[0%d]: %.f | ", i, vet[i]);
        }
        else
            if(vet[i] < 10)
                printf("[%d]: 0%.f | ", i, vet[i]);
            else
                printf("[%d]: %.f | ", i, vet[i]);
    }

    return 0;
}

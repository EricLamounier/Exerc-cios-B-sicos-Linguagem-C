#include <stdio.h>

int main(){

    int vet[6];
    int i=0;

    while(i<6){
        printf("Digite um valor par %d: ", i);

        do{
            scanf("%d", &vet[i]);
        }while(vet[i]%2 != 0);

        i++;
    }

    printf("\n");

    //ordem inversa
    for(i=5;i>=0;i--){
        printf("%d\n", vet[i]);
    }
}

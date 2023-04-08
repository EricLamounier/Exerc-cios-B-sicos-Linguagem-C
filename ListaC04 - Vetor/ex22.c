#include <stdio.h>

int main(){

    int vet1[10], vet2[10];
    int vetRes[20];
    int par = 0, impar = 0;
    int i;

    printf("Vet 1:\n");
    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &vet1[i]);
    }

    printf("Vet 2:\n");
    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &vet2[i]);
    }

    for(i=0;i<20;i++){
        if(i%2 == 0){
            vetRes[i] = vet1[par];
            par++;
        }else{
            vetRes[i] = vet2[impar];
            impar++;
        }
    }

    for(i=0;i<20;i++){
        printf("%d ", vetRes[i]);
    }
    return 0;
}

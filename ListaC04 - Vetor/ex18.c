#include <stdio.h>

int main(){

    int vet[10];
    int x;
    int i;

    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("\n\n");

    for(i=0;i<10;i++){
        if(vet[i]%x == 0)
            printf("%d ", vet[i]);
    }
    return 0;
}

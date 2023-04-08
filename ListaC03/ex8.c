#include <stdio.h>

int main(){

    int i, n, maior, menor;

    for(i=0;i<10;i++){

        printf("Digite um valor: ");
        scanf("%d", &n);

        if(i==0){ //inicializa o maior e menor com o primeiro valor lido
            maior = n;
            menor = n;
        }else{

            if(n > maior){
                maior = n;
            }

            if(n < menor){
                menor = n;
            }
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    return 0;
}

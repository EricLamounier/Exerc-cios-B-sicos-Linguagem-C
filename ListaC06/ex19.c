#include <stdio.h>

int isPrime(int n){
    int i;
    int controller = 0;
    for(i=1;i<=n;i++){
        if(n%i == 0){
            controller++;
            if(controller > 2)
                return 0; //nao eh primo
        }
    }
    return 1; //eh primo
}

int maior_fator_primo(int n){
    int maior = -1;
    int i;

    //caso o valor nao seja primo
    for(i=1;i<=n;i++){
        if(n%i == 0){
            if(isPrime(i)){
                if(i > maior)
                    maior = i;
            }
        }
    }

    return maior;
}

int main() {

    int num, res = 0;
    num = 24;

    res = maior_fator_primo(num);

    printf("Maior fator primo de %d = %d\n", num, res);
    return 0;
}

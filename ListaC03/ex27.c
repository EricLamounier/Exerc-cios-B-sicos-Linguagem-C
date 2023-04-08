#include <stdio.h>

int main(){

    int i, num;
    float harmonico;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        harmonico += (float)1/i;
    }

    printf("%.3f\n", harmonico);
    return 0;
}

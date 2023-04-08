#include <stdio.h>
#include <math.h>

int main(){

    float v[10];
    float m =0;
    float dp = 0;
    int i;

    //le os numeros
    for(i=0;i<10;i++){
        printf("Numero na posicao %d: ", i);
        scanf("%f", &v[i]);
    }

    //calcula a media do vetor
    for(i=0;i<10;i++){
        m += v[i];
    }

    m /= 10;


    //calcula o desvio padrao
    for(i=0;i<10;i++){
        dp += pow((v[i] - m), 2);
    }

    dp = (1/9.0)*dp;

    dp = sqrt(dp);

    printf("DP = %.2f\n", dp);
    return 0;
}

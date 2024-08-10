#include <stdio.h>
#include <math.h>

int main(){

    float num, res;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num >= 0){
        res = sqrt(num);
    }else{
        res = num * num;
    }

    printf("Res = %.2f\n", res);

    return 0;
}

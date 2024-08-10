#include <stdio.h>
#include <stdlib.h>
 #define PI 3.141593

int elevado_a(int x, int y){
    int i, res = 1, aux = x;
    for(i=0;i<y;i++)
        res*=x;
    return res;
}

int fatorial(int n){
    int i, fat = n;
    for(i=1;i<n;i++)
        fat *= i;
    return fat;
}

float seno(float angle){
    int i;
    float res = 0;

    for(i=0;i<5;i++){
        res += ( elevado_a(-1, i)/fatorial(2*i+1) ) * elevado_a(angle, 2*i+1);
    }
    return res;
}

int main(){
    float angulo, res;
    angulo = 90;
    res = seno(angulo);
    printf("Seno(%.1f) = %.4f\n", angulo, res);
    return 0;
}

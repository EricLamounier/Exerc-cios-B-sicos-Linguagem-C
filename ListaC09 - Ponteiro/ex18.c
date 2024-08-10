#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int elevado_a(int x, int y){
    int i, res = 1;
    for(i=0;i<y;i++)
        res *= x;
    return res;
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4*pi*elevado_a(R, 2);
    *volume = (float)4/3*elevado_a(R, 3);
}
int main(){
    float area, volume, r;
    r = 10;
    calc_esfera(r, &area, &volume);
    printf("Area: %f\nVolume: %f\n", area, volume);
    return 0;
}

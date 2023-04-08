#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct sPolar{
    float raio;
    float rad;
}Polar;

typedef struct sCartesiano{
    float x;
    float y;
}Cartesiano;

int main(){

    Polar p;
    Cartesiano c;

    printf("Raio: ");
    scanf("%f", &p.raio);

    printf("Argumento radiano: ");
    scanf("%f", &p.rad);

    c.x = (p.raio)*cos(p.rad);
    c.y = (p.raio)*sin(p.rad);

    printf("%.2f\n%.2f\n", c.x, c.y);

    return 0;
}

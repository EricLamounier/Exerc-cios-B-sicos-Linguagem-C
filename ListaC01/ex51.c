#include <stdio.h>
#include <math.h>

int main(){

    int x, y;
    float d;

    printf("Digite a coordenada x: ");
    scanf("%d", &x);

    printf("Digite a coordenada y: ");
    scanf("%d", &y);

    //utilizando a distancia euclidiana, temos a seguinte formula:
    //D = ( (x2 - x1)^2 + (y2 - y1)^2 )^1/2

    d = sqrt(pow((x - 0), 2) + pow((y - 0), 2));

    printf("A distancia entre as coordenadas (%d, %d) e a origem (0, 0) e': %.2f\n", x, y, d);

    return 0;
}

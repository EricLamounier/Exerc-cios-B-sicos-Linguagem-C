#include <stdio.h>
#include <stdlib.h>

int isTriangle(int x, int y, int z){
    if(x < y+z && y < x+z && z < x+y)
        return 1; //eh triangulo
    return 0; //nao eh triangulo
}

void witchTriangle(int x, int y, int z){
    if(x == y && y == z)
        printf("Triangulo Equilatero!\n");
    else if(x == y || x == z || y == z)
        printf("Triangulo Isosceles!\n");
    else if(x != y && x != z && y != z)
        printf("Triangulo Escanelo!\n");

}

int main() {

    float x, y, z;
    x = 10;
    y = 11;
    z = 9;

    if(isTriangle(x, y, x)){
        printf("Forma um triangulo!\n");

        witchTriangle(x, y, z);

    }else
        printf("Nao forma um triangulo!\n");

    return 0;
}

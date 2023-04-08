#include <stdio.h>

int main(){

    float baseMaior, baseMenor, altura, area;

    printf("Base maior: ");
    scanf("%f", &baseMaior);

    printf("Base menor: ");
    scanf("%f", &baseMenor);

    printf("Altura: ");
    scanf("%f", &altura);

    area = ((baseMaior + baseMenor) * altura)/2;

    printf("A altura do trapezio e': %.2f\n", area);

    return 0;
}

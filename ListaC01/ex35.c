#include <stdio.h>
#include <math.h>

int main(){

    float catA, catB, hip;

    printf("Digite o valor do cateto A: ");
    scanf("%f", &catA);

    printf("Digite o valor do cateto B: ");
    scanf("%f", &catB);

    hip = pow((catA*catA) + (catB*catB), 0.5); //a funcao pow eleva um numero a determinado valor
    //hip = sqrt( (catA*catA) + (catB*catB) ); //a funcao sqrt significa raiz quadrada
    //hip = sqrt( pow(catA,2) + (catB,2) ); //todas possuem o mesmo resultado

    printf("Hipotenuta: %.2f\n", hip);

    return 0;
}

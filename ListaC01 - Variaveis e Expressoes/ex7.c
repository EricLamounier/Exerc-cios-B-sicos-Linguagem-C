#include <stdio.h>

int main(){

    float temperaturaFahrenheit;
    float temperaturaCelcius;

    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    temperaturaCelcius = 5*(temperaturaFahrenheit - 32)/9.0;

    printf("A temperatura %.2f F em Celcius e': %.2f C\n", temperaturaFahrenheit, temperaturaCelcius);

    return 0;
}

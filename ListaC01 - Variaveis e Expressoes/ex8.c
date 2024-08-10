#include <stdio.h>

int main(){

    float temperaturaKelvin;
    float temperaturaCelcius;

    printf("Digite uma temperatura em Kelvin: ");
    scanf("%f", &temperaturaKelvin);

    temperaturaCelcius = temperaturaKelvin - 273.15;

    printf("%.2f K em Celcius e': %.2f C\n", temperaturaKelvin, temperaturaCelcius);
    return 0;
}

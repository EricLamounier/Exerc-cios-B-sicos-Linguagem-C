#include <stdio.h>

int main(){
	
	float metroCubico, litro;
	
	printf("Digite um valor em metros cubicos: ");
	scanf("%f", &metroCubico);
	
	litro = 1000 * metroCubico;
	
	printf("%.2f metro cubico = %.2f litros\n", metroCubico, litro);
	return 0;
}

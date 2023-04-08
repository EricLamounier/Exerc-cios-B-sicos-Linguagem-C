#include <stdio.h>

void main() {
    float salarioAtual = 0;
    float novoSalario = 0;
    int tempoServico;

    printf("Digite seu salario atual: ");
    scanf("%f", &salarioAtual);
    novoSalario = salarioAtual;

    printf("Digite o tempo de servico (em anos): ");
    scanf("%d", &tempoServico);

    if(salarioAtual <= 500){
        if(tempoServico < 1){
            novoSalario = salarioAtual + salarioAtual*0.25;
        }
    }else if(salarioAtual <= 1000){
        if(tempoServico <= 3){
            novoSalario = salarioAtual + salarioAtual*0.20 + 100;
        }
    }else if(salarioAtual <= 1500){
        if(tempoServico <= 6){
            novoSalario = salarioAtual + salarioAtual*0.15 + 200;
        }
    }else if(salarioAtual <= 2000){
        if(tempoServico <= 10){
            novoSalario = salarioAtual + salarioAtual*0.10 + 300;
        }
    }else{
        if(tempoServico > 10){
            novoSalario = salarioAtual + 500;
        }
    }

    if(salarioAtual != novoSalario){
        printf("Seu novo salario eh de: %.2f\n", novoSalario);
    }else{
        printf("Voce nao tem nenhum direito a nenhum aumento.\n");
    }
}

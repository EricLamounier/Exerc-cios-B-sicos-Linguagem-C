#include <stdio.h>

int main(){

    int duracao, hora, minuto, segundo, termino;

    printf("Horario de inicio:\n");
    printf("\t Hora: ");
    scanf("%d", &hora);

    printf("\t Minuto: ");
    scanf("%d", &minuto);

    printf("\t Segundo: ");
    scanf("%d", &segundo);

    printf("Duracao (em segundos): ");
    scanf("%d", &duracao);

    //transformando o horario de inicio em segundos
    hora = hora * 3600;
    minuto = minuto * 60;

    //horario de termino
    termino = hora + minuto + segundo + duracao;

    //calculando o horario de termino
    hora = termino/3600;

    minuto = (termino%3600)/60;

    segundo = (termino%3600)%60;

    printf("\nHorario de termino: %d horas, %d minutos e %d segundos\n", hora, minuto, segundo);


    return 0;
}

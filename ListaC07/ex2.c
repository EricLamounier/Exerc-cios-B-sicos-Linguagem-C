#include <stdio.h>
#include <stdlib.h>

void data(int day, int month, int year){
        switch(month){
            case 1:
                printf("%d de janeiro de %d\n", day, year);
                break;

            case 2:
                printf("%d de fevereiro de %d\n", day, year);
                break;

            case 3:
                printf("%d de marco de %d\n", day, year);
                break;

            case 4:
                printf("%d de abril de %d\n", day, year);
                break;

            case 5:
                printf("%d de maio de %d\n", day, year);
                break;

            case 6:
                printf("%d de junho de %d\n", day, year);
                break;

            case 7:
                printf("%d de julho de %d\n", day, year);
                break;

            case 8:
                printf("%d de agosto de %d\n", day, year);
                break;

            case 9:
                printf("%d de setembro de %d\n", day, year);
                break;

            case 10:
                printf("%d de outubro de %d\n", day, year);
                break;

            case 11:
                printf("%d de novembro de %d\n", day, year);
                break;

            case 12:
                printf("%d de dezembro de %d\n", day, year);
                break;

            default:
                break;


        }
}

int main(){

    int res;

    data(01, 01, 2000);

    return 0;
}

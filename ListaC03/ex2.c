#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;

    printf("Utilizando o laco FOR\n");

    for(i=1;i<=100;i++){
        printf("%d\n", i);
    }

    system("pause");
    system("cls");

    printf("Utilizando o laco while\n");

    i = 1;
    while(i<=100){
        printf("%d\n", i);
        i++;
    }

    system("pause");
    system("cls");

    printf("Utilizando o laco do-while\n");

    i = 1;
    do{
       printf("%d\n", i);
        i++;
    }while(i <= 100);

    return 0;
}

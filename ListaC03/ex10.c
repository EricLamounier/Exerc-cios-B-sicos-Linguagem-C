#include <stdio.h>

int main(){

    int i = 0, cont = 0, somaPar = 0;

    while(i<=50){

        if(cont%2 == 0){
            somaPar += cont;
            i++;
        }
        cont++;
    }

    printf("Soma dos 50 pares: %d\n", somaPar);
    return 0;
}

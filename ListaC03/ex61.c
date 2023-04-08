#include <stdio.h>

int inverteNumero(int aux){

    int u, d, c, um, dm, cm;

    u = aux/100000 * 1;

    aux = aux%100000;

    d = aux/10000 * 10;

    aux = aux%10000;

    c = aux/1000 * 100;

    aux = aux%1000;

    um = aux/100 * 1000;

    aux = aux%100;

    dm = aux/10 * 10000;

    cm = aux%10 * 100000;

    return (u + d + c + um + dm + cm);
}

int main(){

    int num;
    int i, j;
    int maiorPalindromo = 0;
    int c_d_u = 0, cm_dm_um = 0;


    for(i=100;i<=999;i++){

        for(j=100;j<=999;j++){

            if( inverteNumero(i*j) == i*j){

                if(i*j > maiorPalindromo){
                    maiorPalindromo = i*j;
                    cm_dm_um = i;
                    c_d_u = j;
                }
            }

        }
    }

    printf("Maior palindromo: %d x %d = %d\n", c_d_u, cm_dm_um, maiorPalindromo);
    return 0;
}

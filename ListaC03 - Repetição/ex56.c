#include <stdio.h>

int main(){

    int somaPrimo=0, i, j, cont=0;

    for(i=1;i<2000000;i++){

        for(j=1;j<2000000;j++){

            if(i%j == 0)
                cont++;

            if(cont>2)
                break; //nao e' primo
        }

        if(cont<=2){ //e' primo
            somaPrimo+=i;
            printf("%d\n", i);
        }
        cont=0;
    }

    printf("\n\n%d\n", somaPrimo);
    return 0;
}

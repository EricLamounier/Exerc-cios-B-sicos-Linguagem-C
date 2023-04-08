#include <stdio.h>

int main(){

    int cont = 1;
    int i=0;

    while(i<5){

        if(cont%3 == 0){
            printf("%d ", cont);
            i++;
        }
        cont++;
    }
    return 0;
}

#include <stdio.h>

int main(){

    int i = 0;
    int cont = 0;
    float res;

    while(i<100){

        if(i%2 != 0){
            res = (float)i/cont;
            cont++;
        }
        i++;
    }

    printf("%.2f\n", res);
    return 0;
}

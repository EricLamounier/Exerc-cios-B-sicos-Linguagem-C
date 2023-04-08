#include <stdio.h>
#include <math.h>
int main(){

    int i;

    for(i=1000;i<=9999;i++){

        if( pow((i/100 + i%100), 2) == i)
            printf("Segue a propriedade pois, %d + %d = %d^2 = %d\n", i/100, i%100, i/100 + i%100, i);
    }
    return 0;
}

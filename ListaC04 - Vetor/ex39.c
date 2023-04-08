#include <stdio.h>

int fatorial(int n){
    int fat = 1;

    for(n;n>0;n--){
        fat *= n;
    }
    return fat;
}

int coeficiente_bin(int n, int p){
    return fatorial(n)/(fatorial(p) * fatorial(n - p));
}

int main(){

    int n, i, j, c;

    printf("N: ");
    scanf("%d", &n);

    //n = i
    //p = j
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%d ", coeficiente_bin(i, j));
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void linhas(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            printf("! ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    n = 5;
    linhas(n);
    return 0;
}

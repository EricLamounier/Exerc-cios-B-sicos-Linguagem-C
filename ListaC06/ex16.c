#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha(int qnt){
    int i;
    for(i=0;i<qnt;i++){
        printf("=");
    }
}

int main(){
    int qnt;
    qnt = 1000;

    DesenhaLinha(qnt);

    return 0;
}

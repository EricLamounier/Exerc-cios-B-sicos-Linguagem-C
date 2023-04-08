#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char S[40];
    int i, j;

    printf("String: ");
    fgets(S, 50, stdin);

    if(S[strlen(S) - 1] == '\n')
        S[strlen(S) - 1]  = '\0';

    do{
        printf("I: ");
        scanf("%d", &i);
    }while(i < 0);

    do{
        printf("J: ");
        scanf("%d", &j);
    }while(i < 0);

    for(i;i<=j;i++){
        printf("%c", S[i]);
    }
    return 0;
}


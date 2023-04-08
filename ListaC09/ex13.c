#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verifica(char *p1, char *p2){
    int size_p1 = strlen(p1);
    int size_p2 = strlen(p2);
    int control = 0;

    int i=0,j=0;

    while(i<size_p1){
        if(p1[i] != p2[j])
            j=0;
        else
            j++;

        if(j == size_p2)
            return 1;

        i++;
    }
    return 0;
}

int main(){
    char p1[] = {"Aquiestaumtexto"};
    char p2[] = {"Aqui1"};

    int res = verifica(p1, p2);

    if(res)
        printf("A string 2 esta contida na string 1.\n");
    else
        printf("A string 2 nao esta contida na string 1.\n");

    return 0;
}

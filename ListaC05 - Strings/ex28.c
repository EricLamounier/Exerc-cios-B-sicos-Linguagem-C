#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str1[31];
    char str2[31];
    int i, contain = 0;

    printf("String 1: ");
    scanf("%s", &str1);

    setbuf(stdin, NULL);

    printf("String 2: ");
    scanf("%s", &str2);

    setbuf(stdin, NULL);

    for(i=0;i<strlen(str1);i++){
        if(str2[contain] == '\0') break;

        if(str1[i] == str2[contain])
            contain++;
        else
            contain=0;
    }

    if(strlen(str2) == contain)
        printf("A string 1 (%s) CONTEM a string 2 (%s)\n", str1, str2);
    else
        printf("A string 1 (%s) NAO CONTEM a string 2 (%s)\n", str1, str2);
    return 0;
}

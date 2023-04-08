#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    char l1, l2;
    int i, qnt = 0;

    printf("Digite uma string: ");
    fgets(str, 50, stdin);

    setbuf(stdin, NULL);

    printf("Digite a letra L1: ");
    scanf("%c", &l1);

    setbuf(stdin, NULL);

    printf("Digite a letra L2: ");
    scanf("%c", &l2);

    for(i=0;i<strlen(str);i++){

        if(str[i] == l1)
            str[i] = l2;
    }

    printf("%s\n", str);
    return 0;
}




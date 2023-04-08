#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int i, qnt = 0;
    char c;

    printf("Digite uma string: ");
    fgets(str, 50, stdin);

    for(i=0;i<strlen(str);i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){

            qnt++;
        }
    }

    printf("%d Vogais\n", qnt);

    printf("Digite umc caractere: ");
    setbuf(stdin, NULL);

    scanf("%c", &c);

    for(i=0;i<strlen(str);i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){

            str[i] = c;
        }
    }

    printf("%s\n", str);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[100];
    int i;
    printf("%d\n", 'Z');

    printf("String: ");
    fgets(str, 100, stdin);

    for(i=0;i<strlen(str);i++){
        if(str[i] != ' ' && str[i] != '\n'){
            if(str[i]+3 == 'x' || str[i]+3 == 'X')
                str[i] = 'A';
            else if(str[i]+3 == 'y' || str[i]+3 == 'Y')
                str[i] = 'B';
            else if(str[i]+3 == 'z' || str[i]+3 == 'Z')
                str[i] = 'C';
            else {
                if(str[i] <= 90)
                    str[i] += 35;
                else
                     str[i] -= 29;
            }

        }
    }

    printf("%s\n", str);
    return 0;
}

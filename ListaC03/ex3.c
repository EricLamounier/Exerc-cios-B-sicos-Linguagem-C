#include <stdio.h>
#include <Windows.h>

int main(){

    int i = 10;

    while(i>=0){

        printf("%d ", i);

        if(i != 0){

            Sleep(333);

            printf(".");

            Sleep(333);

            printf(".");

            Sleep(334);

            printf(".\n");
        }else{
            Sleep(200);
        }

        i--;
    }

    printf("\nFIM\n");
    return 0;
}

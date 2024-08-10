#include <stdio.h>
#include <stdlib.h>

int padovan(int n){
    if(n <= 3)
        return 1;
    else
        return padovan(n-2) + padovan(n-3);
}

int main(){
    int n = 10;
    printf("%d\n", padovan(n));
    return 0;
}

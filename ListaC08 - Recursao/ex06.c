#include <stdio.h>
#include <stdlib.h>

int Multip_Rec(int n1, int n2){
    if(n1 == 1)
        return n2;
    else
        return n2 * Multip_Rec(n1-1, n2);
}

int main(){

    printf("%d\n", Multip_Rec(3,5));
    return 0;
}

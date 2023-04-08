#include <stdio.h>
#include <stdlib.h>

/*
int elevado_a(int x, int y){
    int i;
    int res=1;
    for(i=0;i<y;i++)
        res*=x;
    return res;
}
*/

int elevado_a(int x, int y){
    if(y == 0)
        return 1;
    else
        return x * elevado_a(x, y-1);
}

int main(){
    int x, y;
    x = 2;
    y = 4;
    //x^y = 8;
    printf("%d\n", elevado_a(x, y));
    return 0;
}

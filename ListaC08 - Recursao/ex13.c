#include <stdio.h>
#include <stdlib.h>

int SomaSerie(int i, int j, int k){
    if(i > j)
        return 0;
    else
        return i + SomaSerie(i+k, j, k);
}

int main(){
    int i,j,k;
    i = 1;
    j = 10;
    k = 2;

    printf("%d\n", SomaSerie(i,j,k));

    return 0;
}


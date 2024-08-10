#include <stdio.h>
#include <stdlib.h>

int fibg(int f0, int f1, int n){
    if(n == 0)
        return f0;
    else if(n == 1)
        return f1;
    else
        fibg(f0, f1, n-1) +fibg(f0, f1, n-2);

}

int main(){
    int n = 10;
    int x = 2, y = 3;
    printf("%d\n", fibg(x, y, n));
    return 0;
}

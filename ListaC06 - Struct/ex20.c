#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    int i, res = n;
    for(i=1;i<n;i++)
        res *= i;
    return res;
}

int main() {

    int num, res = 0;
    num = 5;

    res = fatorial(num);

    printf("%d! = %d\n", num, res);
    return 0;
}

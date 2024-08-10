#include <stdio.h>
#include <stdlib.h>

int sumBetween(int n1, int n2){
    int res = 0;
    for(n1;n1<=n2;n1++)
        res += n1;
    return res;
}

int main() {
    int n1, n2, res =0;

    n1 = 1;
    n2 = 5;

    res = sumBetween(n1, n2);

    printf("%d\n", res);

    return 0;
}

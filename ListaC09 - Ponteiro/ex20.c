#include <stdio.h>
#include <stdlib.h>

int negativos(float *arr, int N){
    int i;
    int qnt=0;
    for(i=0;i<N;i++)
        if(arr[i] < 0)
            qnt++;
    return qnt;
}

int main(){
    float arr[] = {1,2,-3,4,5,6,7,-8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int qnt_neg;
    qnt_neg = negativos(arr, size);
    printf("%d\n", qnt_neg);
    return 0;
}

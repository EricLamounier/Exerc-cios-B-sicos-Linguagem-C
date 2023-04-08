#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int *arr1, int size_1, int *arr2, int size_2, int *soma){
    if(size_1 != size_2)
        return 0;

    int i;
    for(i=0;i<size_1;i++)
        soma[i] = arr1[i] + arr2[i];
    return 1;
}
int main(){
    int arr1[] = {1,1,1,1,1};
    int arr2[] = {2,2,2,2,2};
    int arr3[5];

    soma_vetor(arr1, 5, arr2, 5, arr3);

    int i;
    for(i=0;i<5;i++)
        printf("%d ", arr3[i]);

    return 0;
}

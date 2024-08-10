#include <stdio.h>
#include <stdlib.h>

void min_max(int *arr, int size, int *min, int *max){
    int i;
    *min = arr[0];
    *max = arr[0];

    for(i=0;i<size;i++){
        if(arr[i] < *min)
            *min = arr[i];

        if(arr[i] > *max)
            *max = arr[i];
    }
}

int main(){
    int arr[] = {1,2,3,77,6,4,-4,4,5,6,2,3}; //12
    int min, max;
    int size = sizeof(arr)/sizeof(arr[0]);
    min_max(arr, size, &min, &max);
    printf("Min: %d\nMax: %d\n", min, max);
    return 0;
}

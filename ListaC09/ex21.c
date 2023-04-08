#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    int i;

    ptr = arr;

    for(i=0;i<10;i++){
        (*ptr)++;
        ptr++;
    }

    for(i=0;i<10;i++)
        printf("%d ", arr[i]);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void print_array(int *v, int size){
    if(size > -1){
        print_array(v, size-1);
        printf("%d ", v[size]);
    }
}

int main(){
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(v)/sizeof(int) - 1;
    print_array(v, size);
    return 0;
}

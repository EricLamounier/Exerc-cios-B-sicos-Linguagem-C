#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 int *array;
 array = (int*) malloc (5 * sizeof(int));
 printf("%d",sizeof(array)/sizeof(array[0]));
 return 0;
}

#include <stdio.h>
#include <stdlib.h>

int segundos(int hour, int minutes, int seconds){
    seconds  += hour * 3600;
    seconds += (minutes * 60);
    return seconds;
}

int main(){

    int res;

    res = segundos(12, 4, 10);

    printf("%d\n", res);

    return 0;
}


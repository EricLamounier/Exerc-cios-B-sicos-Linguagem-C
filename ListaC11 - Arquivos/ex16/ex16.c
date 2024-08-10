#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    FILE *f;
    int i;

    f = fopen("arq.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char binario[31];
    for(i=0;i<10;i++){
        itoa(v[i], binario, 2);
        fprintf(f, "%s\n", binario);
    }
    fclose(f);
    return 0;
}

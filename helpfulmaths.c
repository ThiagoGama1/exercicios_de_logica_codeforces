#include <stdio.h>
#include <string.h>

void setup(char *initialSum){
    size_t size = strlen(initialSum);
    int array[3] = {0};
    for(int i = 0; i < size; i++){
        if(initialSum[i] != '+'){
            int index = initialSum[i] - '1';
            array[index]++;
        }
    }
    int contador = 0;
    int flagJaImprimi = 0;
    while(contador != array[0]){
        if(flagJaImprimi == 1){
            printf("+");
        }
        printf("1");
        flagJaImprimi = 1;
        contador++;
    }
    contador = 0;
    while(contador != array[1]){
        if(flagJaImprimi == 1){
            printf("+");
        }
        printf("2");
        flagJaImprimi = 1;
        contador++;
    }
    contador = 0;
    while(contador != array[2]){
        if(flagJaImprimi == 1){
            printf("+");
        }
        printf("3");
        flagJaImprimi = 1;
        contador++;
    }
}

int main(){
    char initialSum[101];
    if(scanf("%s", initialSum) == 1){
        setup(initialSum);
    }
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhaUm, colunaUm, contador = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int valor;
            scanf("%d", &valor); 
            if(valor == 1){
                linhaUm = i;
                colunaUm = j;
            }
        }
}
    contador += abs(linhaUm - 2);
    contador += abs(colunaUm - 2);
    printf("%d", contador);
}
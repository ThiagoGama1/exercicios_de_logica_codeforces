#include <stdio.h>
int setup(int answers[]){
    int contadorUm = 0;
    
    for(int i = 0; i <= 2; i++){
        if(answers[i] != 0 && answers[i] != 1){
            return 0;
        }
        if(answers[i] == 1){
            contadorUm++;
        }
    }
    if(contadorUm >= 2){
        return 1;
    }
    return 0;
}
int main(){
    int respostas[3];
    int n;
    int contador = 0;
    if(scanf("%d", &n) == 1){
        for(int i = 0; i < n; i++){ 
            if(scanf("%d%d%d", &respostas[0], &respostas[1], &respostas[2]) == 3){
                contador += setup(respostas);
            }
        }
        printf("%d", contador);
    }
    return 0;
}
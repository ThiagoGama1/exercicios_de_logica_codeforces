#include <stdio.h>
#include <string.h>
void solve(char palavra[]){
    size_t tamanho = strlen(palavra);
    if(tamanho < 1 || tamanho > 100){
        return;
    }
    if(tamanho <= 10){
        printf("%s\n", palavra);
        return;
    }
    printf("%c%i%c\n", palavra[0], tamanho - 2, palavra[tamanho - 1]);
}
int main(){
    int n;
    if(scanf("%d", &n) != 1){
        return 0;
    }
    for(int i = 0; i < n; i++){
        char palavra[101];
        if(scanf("%s", palavra) == 1){
            solve(palavra);
        }
        }
}
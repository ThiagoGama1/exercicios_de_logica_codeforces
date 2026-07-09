#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int x = 0;
    
    if(scanf("%d", &n) == 1){
        if(n < 1 || n > 150){
            return 0;
        }
        
        for(int i = 0; i < n; i++){
            char statement[4];
            if(scanf("%s", statement) == 1){
                char *resultado = strchr(statement, '+');
                if(resultado == NULL){
                    x--;
                }
                else{
                    x++;
                }
            }
        }
        printf("%d", x);
    }
}
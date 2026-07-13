#include <stdio.h>

void setup(int M, int N){
    if(M < 1 || M > N || N > 16){
        return;
    }
    int resultado = (M * N) / 2;
    printf("%d", resultado);
}
int main(){
    int m, n;
    if(scanf("%d%d", &m, &n) == 2){
        setup(m, n);
    }
}
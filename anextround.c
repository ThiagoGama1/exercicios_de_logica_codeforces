#include <stdio.h>

int setup(int n, int k, int grades[n]){
    if(k > n || k < 1 || n > 50){
        return 0;
    }
    int kValue = grades[k-1];
    int count = 0;
    for(int i = 0; i < n; i++){
        if(grades[i] >= kValue && grades[i] > 0){
            count++;
        }
    }
    return count;
}
int main(){
    int n, k;
    if(scanf("%d%d", &n, &k) == 2){
        int grades[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &grades[i]);
        }
        int resultado = setup(n, k, grades);
        printf("%d", resultado);
    }
    return 0;
}
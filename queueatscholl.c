#include <stdio.h>
#include <string.h>
void setup(int n, int t, char* queue){
    char next[n+1];
    for(int a = 0; a < t; a++){
        for(int i = 0; i <= n; i++){
            if(i == n){
                next[i] = '\0';
                break;
            }
            next[i] = queue[i];
        }
        for(int j = 0; j < n; j++){
            if(queue[j] == 'B' && queue[j+1] == 'G'){
                next[j] = queue[j+1];
                next[j+1] = queue[j];
            }
        }
        queue = strcpy(queue, next);
    }
    printf("%s", next);
}
int main(){
    int n, t;
    scanf("%d%d", &n, &t);
    char queue[n+1];
    scanf("%s", queue);
    setup(n, t, queue);
}
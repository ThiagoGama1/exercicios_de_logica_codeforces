#include <stdio.h>
#include <stdlib.h>

void setup(int n){
    int half = n / 2;
    if(half % 2 != 0){
        printf("NO\n");
        return;
    }
    printf("YES\n");
    int array[n];
    for(int i = 0; i < half; i++){
        int a = 2;
        array[i] = a + (2*i); 
    }
    for(int j = half; j < n; j++){
        int a = 1;
        int localPosition = j - half;
        if((j+1) == n){
            array[j] = a + (2*localPosition) + half;
        }
        else{
            array[j] = a + (2*localPosition);
        }
    }
    char buffer[16000005];
    int pos = 0;
    for(int i = 0; i < n; i++){
        pos += sprintf(buffer + pos, "%d ", array[i]);
    }
    printf("%s", buffer);
    printf("\n");
}
int main(){
    int t;
    if(scanf("%d", &t) == 1){
        for(int i = 0; i < t; i++){
            int n = 0;
            if(scanf("%d", &n) == 1){
                setup(n);
            }
        }
    }
}
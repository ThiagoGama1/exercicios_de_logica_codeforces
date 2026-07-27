#include <stdio.h>

int setup(int n, int array[n]){
    int count1 = 0, count2 = 0;

    for(int i = 0; i < n; i++){
        int index = i % 2;
        if(index == 0 && array[i] % 2 != 0){
            count1++;
        }
        else if(index != 0 && array[i] % 2 == 0){
            count2++;
        }
    }
    if(count1 != count2){
        return -1;
    }
    return count1;
    

}
int main(){
    int t, n;
    if(scanf("%d", &t) == 1){
        for(int i = 0; i < t; i++){
            scanf("%d", &n);
            int array[n];
            for(int j = 0; j < n; j++){
                scanf("%d", &array[j]);
            }
            printf("%d\n", setup(n, array));
        }
    }
}
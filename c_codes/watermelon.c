#include <stdio.h>

void solve(int pound){
    if(pound < 1 || pound > 100){
        return;
    }
    if(pound == 2){
        printf("NO");
        return;
    }
    if(pound % 2 == 0){
        printf("YES");
        return;
    }
    printf("NO");
    return;
}
int main(){
    int p;
    if (scanf("%d", &p)){
        solve(p);
    }
    return 0;
}
#include <stdio.h>

int setup(int a, int b){ //limaks (a) weight tripples every year
    //bobs (b) weight doubles every year
    int count = 0;
     while(a <= b){
        a = 3 * a;
        b = 2 * b;
        count++;
     }
     return count;
}

int main(){
    int a, b;
    if(scanf("%d%d", &a, &b) == 2){
        printf("%d", setup(a,b));
    }
}
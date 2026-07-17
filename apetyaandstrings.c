#include <stdio.h>
#include <string.h>
#include <ctype.h>
int comparar(char* str1, char* str2){
    int size;
    size = strlen(str1);
    
    for(int i = 0; i < size; i++){
        if(tolower(str2[i]) > tolower(str1[i])){
            return -1;
        }
        else if(tolower(str2[i]) < tolower(str1[i])){
            return 1;
        }
    }
    return 0;
}

int main(){
    char str1[101];
    char str2[101];
    if(scanf("%s%s", str1, str2) == 2){
        int resultado = 2;
        resultado = comparar(str1, str2);
        printf("%d", resultado);
    }
}
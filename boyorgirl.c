#include <stdio.h>
#include <string.h>

void setup(char *inputString){
    size_t size = strlen(inputString);
    int array[26] = {0};

    for(int i = 0; i < size; i++){
        int index = inputString[i] - 'a';
        array[index]++;
    }
    int count = 0;
    for(int j = 0; j < 26; j++){
        if(array[j] != 0){
            count++;
        }
    }
    if(count % 2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
}
int main(){
    char buffer[101];
    if(scanf("%s", buffer) == 1){
        setup(buffer);
    }
}
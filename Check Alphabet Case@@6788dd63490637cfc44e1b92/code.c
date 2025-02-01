#include <stdio.h>

int main(){
    char letter;
    scanf("%c",&letter);
    if((letter<='a')&&(letter>='z')){
        printf("Lowercase");
    }
    else if((letter<='A')&&(letter>='Z')){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
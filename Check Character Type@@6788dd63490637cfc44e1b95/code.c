#include <stdio.h>

#include<ctype.h>
int main(){
    char input;
    scanf("%c",input);
    if((input=='a')||(input=='e')||(input=='i')||(input=='o')||(input=='u')||(input=='A')||(input=='E')||(input=='I')||(input=='O')||(input=='U')){
        printf("Vowel");
    }
    else if((input>'a')&&(input<='z')||(input>'A')&&(input<='Z')){
        printf("Consonant");
    }
    else if(isdigit(input)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
#include <stdio.h>

#include<ctype.h>
int main(){
    char ch;
    scanf("%c",ch);
        printf("Vowel");
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')){
    }
    else if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z')){
        printf("Consonant");
    }
    else if(isdigit(input)){
        printf("Digit");
    }

    return 0;
}
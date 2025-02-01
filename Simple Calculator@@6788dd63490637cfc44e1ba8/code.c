#include <stdio.h>

int main(){
    int a,b;
    char ch;
    PRINTF("");
    scanf("%d%d",&a,&b);
    scanf("%c", &ch);
    if(ch=='+'){
        printf("%d",a+b);
    }
    else if(ch=='-'){
        printf("%d",a-b);
    }
    else if(ch=='*'){
        printf("%d",a*b);
    }
    else if(ch=='/'){
        printf("%d",a/b);
    }
    else{
        printf("Error");
    }
    return 0;
}
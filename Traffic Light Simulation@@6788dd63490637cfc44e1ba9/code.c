#include <stdio.h>
int main(){
    char a;
    printf("");
    scanf("%c",&a);
    if((a=='R') ||(a=='r')){
        printf("Stop");
    }
    else if((a=='Y')||(a=='y')){
        printf("Slow Down");
    }
    else if((a=='G')||(a=='g')){
        printf("Go");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}

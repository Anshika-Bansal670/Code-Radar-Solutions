#include <stdio.h>

int main(){
    int age,stat;
    printf("");
    scanf("%d%d",&age,&stat);
    if((age>=18)&&(stat==1)){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}
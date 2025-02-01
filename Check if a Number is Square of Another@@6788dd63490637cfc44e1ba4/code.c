#include <stdio.h>
#include<math.h>

int main(){
    int a,b,power;
    printf("");
    scanf("%d%d",&a,&b);
    power=(int)pow(b,2);
    if(a==power){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
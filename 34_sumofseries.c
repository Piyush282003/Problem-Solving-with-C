#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid");
        return 0;
    }
    float sum=0;
    for(float i=1;i<=n;i++){
        sum+= 1/i;
    }

    printf("%.2f",sum);
    return 0;
}
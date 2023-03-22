#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int cnt=0;
    while(n!=0){
        cnt++;
        n=n/10;
    }
    int sum=0;
    for(int i=1;i<cnt;i++){
        int num=1;
        for(int j=0;j<i+1;j++){
            num=num*i;
        }
        sum+=num;
    }
    printf("Sum of all elements %d",sum);
    return 0;
}
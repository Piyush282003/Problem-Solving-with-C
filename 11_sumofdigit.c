#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    sum+=n/1000;
    n = n%1000;
    sum+= n/100;
    n = n%100;
    sum+=n/10;
    n = n%10;
    sum+=n;
    printf("%d",sum);
    return 0 ;
}
#include <stdio.h>

int main(){
    long long n;
    scanf("%d",&n);
    long long sum=0;
    while(n!=0){
        int ans=n%10;
        sum+=ans;
        n=n/10;
    }
    printf("The sum of number n is %d\n",sum);
    long long ans=0;
    while(sum!=0){
        ans+=sum%10;
        sum=sum/10;
    }
    printf("The sum of sum is %d\n",ans);
    return 0;
}
#include <stdio.h>

int sumeven(int n,int sum){
    if(n>10){
        return sum;
    }
    // if(n%2==0){
    //     printf("%d\n",n);
    //     sum+=n;
    // }
    sum+=n;
    n++;
    sumeven(n,sum);
}
int que(int x){
    if(x==2){
        return 2;
    }
    else{
        printf("+ ");
        return que(x-1);
    }
}
int main(){
    // printf("%d",sumeven(1,0));
    printf("%d",que(6));
    return 0;
}
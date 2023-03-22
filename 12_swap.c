#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("No before swap is %d %d\n",a,b);
    printf("No before swap is %d %d\n",&a,&b);
    
    printf("After swapping is %d %d\n",a+b-a,a+b-b);
    printf("No before swap is %d %d\n",&a,&b);
    
    a=a+b;
    b= a-b;
    a=a-b;
    printf("After swapping is %d %d\n",a,b);
    printf("No before swap is %d %d\n",&a,&b);

    return 0 ;
}
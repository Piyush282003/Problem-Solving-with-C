#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a = n%100;
    n = n/100;
    
    int b = n%100;
    
    if(a>60){
        b=b+1;
        a =a-60;
    }
    printf("%d hours %d minutes",b,a);

    return 0;
}
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++){
        int m;
        for(int j=1;j<i+1;j++){
            if(i%2==0){
                printf("%d",m+i);
                m--;
            }
            else{
                printf("%d",k);
                m=k;
            }
            k++;
        }
        printf("\n");
    }
    return 0;
}
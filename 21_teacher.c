#include <stdio.h>

int main(){
    int m,e,p,c,b,comp;
    scanf("%d %d %d %d %d %d",&m,&e,&p,&c,&b,&comp);

    if(m>80){
        printf("Eligible for commerce and science\n");
        int n = (p+c+comp)/3;
        if(n>80){
            printf("Eligible for science with computer in optional\n");
        }
        else{
            printf("Eligible for commerce only\n");
        }

        int a = (p+c+b)/3;
        if(a>80){
            printf("Eligible for science with both maths and biology\n");
        }
        else{
            printf("Eligible for science with computer\n");
        }
    }
    else{
        int a = (p+c+b)/3;
        if(a>80){
            printf("Eligible for science with physics,chemistry and biology only\n");
        }
        else{
            printf("Eligible for arts\n");
        }
    }
    return 0;
}
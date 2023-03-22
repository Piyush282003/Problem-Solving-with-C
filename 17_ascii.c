#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    if(n>=65 && n<=90){
        char c = n;
        // printf("%c",c);
        n = n-5;
        printf("%c %c %c %c %c",n,n+1,n+2,n+3,n+4);
    }
    else if(n>=97 && n<=122){
        char c = n;
        // printf("%c",c);
        printf("%c %c %c %c %c",n,n+1,n+2,n+3,n+4);
    }
    else if(n>48 && n<=57){
        n = (n%49)+1;
        if(n%2==0){
            printf("Even h bhai\n");
        }
        else{
            printf("Odd hai bhai\n");
        }
    }
    else{
        char c = n;
        printf("Symbol h bhai %c\n",c);
    }
    return 0;
}
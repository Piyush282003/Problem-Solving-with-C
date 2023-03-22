#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int flag=1;
    for(int i=0;i<n;i++){
        if(str[i]!=str[n-i-1]){
            flag=0;
            break;
        }
    }

    if(flag){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}
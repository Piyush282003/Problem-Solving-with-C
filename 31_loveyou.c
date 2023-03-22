#include <stdio.h>

int main(){
    char arr[7] = "LOVEYOU";

    for(int i=0;i<7;i++){
        for(int j=0;j<i+1;j++){
            printf("%c ",arr[j]);
        }
        printf("\n");
    }
    return 0;
}
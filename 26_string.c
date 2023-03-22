#include <stdio.h>

int main(){
    
    char ch[10];
    gets(ch);

    // printing a string in one line
    puts(ch);
    printf("%s\n",ch);


    // all capital letters
    for(int i=0;i<5;i++){
        ch[i]=ch[i]-32;
        printf("%c",ch[i]);
    }

    printf("\n");
    // 1st small letter
    for(int i=0;i<5;i++){
        if(i==0){
            ch[i]=ch[i]+32;
        }
        printf("%c",ch[i]);
    }


    
    return 0;
}
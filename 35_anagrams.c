#include <stdio.h>
#include <string.h>

int checkanagram(char a[],char b[]){
    int first[26]={0},second[26]={0};
    
    for(int i=0;i<strlen(a);i++){
        first[a[i]-'a']++;
    }
    for(int i=0;i<strlen(b);i++){
        second[b[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(first[i]!=second[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char a[100],b[100];
    gets(a);
    gets(b);

    // puts(b);

    printf("%d",checkanagram(a,b));
    return 0;
}
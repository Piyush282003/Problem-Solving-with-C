#include <stdio.h>
#include<string.h>
int main(){
    char s1[10];
    char s2[10];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int pin;
    scanf("%d",&pin);
    int x=pin;
    int n;
    scanf("%d",&n);
    int h=n;

    int cnts1=0,cnts2=0,cnt3=0;
    for(int i=0;i<strlen(s1);i++){
        cnts1++;
    }
    for(int i=0;i<strlen(s2);i++){
        cnts2++;
    }

    char m;
    if(cnts1<cnts2){
        if(s1[cnts1-1]>='A' && s1[cnts1-1]<='Z'){
                m = s1[cnts1-1]+'a'-65;
            }
            else{
                m = s1[cnts1-1]-'a'+65;
            }
    }
    else if(cnts1==cnts2){
        while(s1[cnt3]==s2[cnt3]){
            cnt3++;
        }
        if(s1[cnt3]<s2[cnt3]){
            if(s1[cnts1-1]>='A' && s1[cnts1-1]<='Z'){
                m = s1[cnts1-1]+'a'-65;
            }
            else{
                m = s1[cnts1-1]-'a'+65;
            }
        }
        else{
            if(s2[cnts2-1]>='A' && s2[cnts2-1]<='Z'){
                m = s2[cnts2-1]+'a'-65;
            }
            else{
                m = s2[cnts2-1]-'a'+65;
            }
        }
    }
    else{
        if(s2[cnts2-1]>='A' && s2[cnts2-1]<='Z'){
                m = s2[cnts2-1]+'a'-65;
            }
            else{
                m = s2[cnts2-1]-'a'+65;
            }
    }
    
    printf("%c\n",m);

    int ans1;
    while(n!=0){
        ans1=x%10;
        x=x/10;
        n--;
    }

    x=pin;
    int ans2,revn=0;
    while(pin!=0){
        revn = revn*10+(pin%10);
        pin=pin/10;
    }
    // printf("%d",revn);
    while(h!=0){
        ans2=revn%10;
        revn=revn/10;
        h--;
    }
    // printf("%d %d",ans1,ans2);

    printf("Code is %c",m);
    if(cnts1>=cnts2){
        for(int i=0;i<strlen(s1);i++){
            if(s1[i]>=65 && s1[i]<=90){
                printf("%c",s1[i]+'a'-65);
            }
            else{
                printf("%c",s1[i]-'a'+65);
            }
        }
    }
    else{
        for(int i=0;i<strlen(s2);i++){
            if(s2[i]>=65 && s2[i]<=90){
                printf("%c",s2[i]+'a'-65);
            }
            else{
                printf("%c",s2[i]-'a'+65);
            }
        }
    }
    printf("%d%d",ans2,ans1);

    return 0;
}
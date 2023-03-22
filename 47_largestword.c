#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char c[100]="loge H nkln nkljnlkm" ;
    // char c[50]="loge H";
    // char c[500]="loge Hjcadofncadjcvnsdj";
    char wrd[50];
    // gets(c);
    // scanf("%s",&c);
    
    int lar=-100000;
    int cnt=0,start=0;
    for(int i=0;i<=strlen(c);i++){
        
        if(c[i]==' ' || c[i]=='\0'){
            if(cnt>lar){
                start=i;
                lar = cnt;
            }
            cnt=0;
            continue;
        }
        cnt++;
    }

    printf("Greatest word is of length:- %d\n",lar);
    int k=0;
    for(int i=start-1;i>=0 && c[i]!=' ';i--){
        // printf("%c ",c[i]);
        wrd[k++]=c[i];
    }

    printf("Greatest word is : ");
    for(int i=0;i<lar;i++){
        printf("%c",wrd[lar-i-1]);
    }
    
    return 0;
}
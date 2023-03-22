#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    printf("Enter elements of array1\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter elements of array2\n");
    for(int i=0;i<n;i++){
        scanf("%d",&brr[i]);
    }


    printf("Common Elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(brr[i]==arr[j]){
                printf("%d\n",arr[j]);
            }
        }
    }
    return 0;
}
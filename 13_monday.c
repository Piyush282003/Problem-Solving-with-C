#include <stdio.h>

int main(){
    int l,b,h;
    scanf("%d %d %d",&l,&b,&h);

    printf("Surface area of cuboid is %d\n",2*((l*b)+(b*h)+(l*h)));
    printf("Volume of cuboid is %d",(l*b*h));
    return 0;
}
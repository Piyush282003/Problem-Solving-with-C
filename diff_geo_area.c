#include<stdio.h>
int main(){
    int a,l,b,s,r,ht,b1,b2,h;
    char c;
    printf("enter shape:\n");
    scanf("%c",&c);
    switch(c){
        case 'S':
        printf("enter side:\n");
        scanf("%d",&s);
        a=s*s;
        printf("Area of square is %d",a);
        break;
        case 'R':
        printf("enter l and b:\n");
        scanf("%d %d",&l,&b);
        a=l*b;
        printf("Area of rectangle is %d",a);
        break;
        case 'Z':
        printf("enter b1 b2 h:\n");
        scanf("%d %d %d",&b2,&b1,&h);
        a=((b1+b2)*h)/2;
        printf("Area of trapezium is %d",a);
        break;
        case 'C':
        printf("enter r:\n");
        scanf("%d",&r);
        a=22/7*r*r;
        printf("Area of circle is %d",a);
        break;
        case 'T':
        printf("enter b and ht:\n");
        scanf("Area of triangle is %d %d",&b,&ht);

        a=(b*ht)/2;
        printf("%d",a);
        break;
        default:
        printf("wrong\n");



    }

}
#include <stdio.h>

int main()
{

    int p,r,t;
    printf("Enter kro bhai pehli value\n");
    scanf("%d", &p);
    printf("Enter kro bhai dusri value\n");
    scanf("%d", &r);
    printf("Enter kro bhai dusri value\n");
    scanf("%d", &t);
    
    float simpleinterest = (p*r*t)/100;
    printf("Simple interest is %lf",simpleinterest);
    return 0;
}
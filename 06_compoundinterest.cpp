#include <stdio.h>
#include <math.h>

int main()
{

    int p,t,n;
    float r;
    printf("Enter kro bhai pehli value\n");
    scanf("%d", &p);
    printf("Enter kro bhai dusri value\n");
    scanf("%f", &r);
    printf("Enter kro bhai teesri value\n");
    scanf("%d", &t);
    
    float compoundinterest = p * pow(1+(r/100),t);
    printf("Simple interest is %lf",compoundinterest);
    return 0;
}
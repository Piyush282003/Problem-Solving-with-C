#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter kro bhai pehli value\n");
    scanf("%d", &a);
    printf("Enter kro bhai dusri value\n");
    scanf("%d", &b);
    printf("The sum of the number you entered is %d \n", a + b);
    printf("The sum of the number you entered is %d \n", a - b);
    printf("The sum of the number you entered is %d \n", a * b);
    printf("The sum of the number you entered is %d \n", a / b);
    printf("The sum of the number you entered is %d \n", a % b);
    return 0;
}

// we cannot use keywords like scanf,printf,int main() as identifiers..
// you create an identifier by specifying a variable...

// variable topic:

// a var is nothing but a memory area used to store data
// each var must be initialized/represented with a new name 
// eg: int no=2 and int no=3 toh it gives error
// each var is associated with an address


// data types topic:

// a data type defines the type of value a var can store.
// in c programming every var is associated with a data type
// each data type requires different amt of memory 
// eg: a var declared an int stores only integer
// void is a data type that has no value and that does not return any value/result
// void comes under primitive data type
// 3 types: 1 primary data type                       2. drrived data type               3. user defined 

// 1. int,float,char,double
// 2. array,ptrs,functions
// 3. structure,union,enumeration 




// primary data type:
// also known as fundamental data types 
// all other data types are derived from these data type


// data type          memory         range      formatspecifier        
// int                 2or4           1,0,3          %d
// char                1              'a'            %c
// float                 4          1.02,-0.245              %f
// double               8                           %lf
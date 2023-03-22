// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n<10){
//         printf("The value you entered is less than 10\n");
//     }
//     else if(n==10){
//         printf("The value you entered is equal to 10\n");
//     }
//     else{
//         printf("The value you entered is more than 10\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     if(a<b){
//         printf("b is greater than a\n");
//     }
//     else if(a==b){
//         printf("b is equal to a\n");
//     }
//     else{
//         printf("a is greater than b\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b && a>c){
//         printf("a is greater than b and c\n");
//     }
//     else if(a<b && b>c){
//         printf("b is greater than a and c\n");
//     }
//     else{
//         printf("c is greater than a and b\n");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int a,b,c;
//     printf("enter three sides of triangle\n");
//     scanf("%d %d %d",&a,&b,&c);

//     if(a!=b && a!=c && b!=c){
//         printf("Triangle is scalene\n");
//     }
//     else if(a==b && b==c && a==c){
//         printf("Triangle is equilateral\n");
//     }
//     else{
//         printf("Triangle is isosceles\n");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//      int n;
//      scanf("%d",&n);
//      if(n==0){
//         printf("Sunday\n");
//      }
//      else if(n==1){
//         printf("Monday\n");
//      }
//      else if(n==2){
//         printf("Tuesday\n");
//      }
//      else if(n==3){
//         printf("Wednesday\n");
//      }
//      else if(n==4){
//         printf("Thursday\n");
//      }
//      else if(n==5){
//         printf("Friday\n");
//      }
//      else if(n==6){
//         printf("Saturday\n");
//      }
     
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int n;
//     printf("press '1' for area of rectagle and press '2' for area of square\n");
//     scanf("%d",&n);

//     if(n==1){
//         int l,b;
//         printf("Enter the length and breadth of rectangle\n");
//         scanf("%d %d",&l,&b);
//         printf("The area of rectangle is %d\n",l*b);
//     }
//     else if(n==2){
//         int side;
//         printf("Enter the side of square\n");
//         scanf("%d",&side);
//         printf("The area of square is %d\n",side*side);
//     }
//     else{
//         printf("Wrong choice hai saale\n");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     char ch;
//     scanf("%c",&ch);
//     if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
//         printf("Its an alphabet\n");
//     }
//     else{
//         printf("Its a symbol\n");
//     }
//     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
//         printf("Its a vowel\n");

//     }
//     return 0;
// }



#include <stdio.h>

int main(){
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    float p = sp-cp;
    if(p>0){
        printf("Its a profit bhaiya and it is of %f percent\n",p/100);
    }
    else{
        printf("Its a loss bhaiya and it is of %f percent\n",p/100);
    }
    return 0;
}

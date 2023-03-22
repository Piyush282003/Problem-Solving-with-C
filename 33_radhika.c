#include <stdio.h>
int main()
{
    // int num_books = 5;
    // float book_price, discount = 0.1, total_cost = 0.0;

    // for (int i = 0; i < num_books; i++)
    // {
    //     printf("Enter the price of book %d: $", i + 1);
    //     scanf("%f", &book_price);
    //     total_cost += book_price;
    // }
    // total_cost *= (1 - discount);
    // printf("Total cost for %d books after 10%% discount: $%.2f\n",
    //        num_books, total_cost);

    float n,total=0;
    for(int i=0;i<5;i++){
        scanf("%f",&n);
        total+=n;
    }
    total = total-(total/10);
    printf("%f",total);
    return 0;
}
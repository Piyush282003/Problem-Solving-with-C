#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int yr = 0, week = 0, days = 0, month = 0;
    while (n > 0)
    {
        if (n >= 365)
        {

            yr += n / 365;
            n=n%365;
        }
        else if (n >= 30 )
        {

            month += n / 30;
            n=n%30;
        }
        else if (n >= 7 )
        {
            week += n / 7;
            n=n%7;
        }
        else if (n < 7 && n>0)
        {

            days += n ;
            break;
        }
        
    }

    printf("%d year %d month %d week %d days", yr, month, week, days);

    return 0;
}
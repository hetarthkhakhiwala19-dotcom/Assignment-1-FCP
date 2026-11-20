#include<stdio.h>
int main()
{
    int n=31558150,days,hours,minutes;
    days=n/86400;
    hours=(n%86400)/3600;
    minutes=(n%3600)/60;
    printf("The time is %d days, %d hours and %d minutes",days,hours,minutes);
    return 0;
}
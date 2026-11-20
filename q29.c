#include<stdio.h>
int main()
{
    int n,originalnumber,r,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    originalnumber=n;
    while(n!=0)
    {
        r=n%10;
        sum = (sum*10) + r;
        n/=10;
    }
    if(sum==originalnumber)
    {
        printf("Pallindrom\n");
    }
    else
    {
        printf("Not Pallindrom\n");
    }
    return 0;
}
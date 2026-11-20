#include<stdio.h>
#include<math.h>
int main()
{
    int n,originalnumber,i=0,r,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    originalnumber=n;
    while(originalnumber!=0)
    {
        originalnumber/=10;
        i++;
    }
    originalnumber=n;
    while(n!=0)
    {
        r=n%10;
        sum = sum + pow(r,i);
        n/=10;
    }
    if(sum==originalnumber)
    {
        printf("Armstrong Number\n");
    }
    else
    {
        printf("Not Armstrong Number\n");
    }
    return 0;

}
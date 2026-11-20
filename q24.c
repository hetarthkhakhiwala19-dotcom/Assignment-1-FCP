#include<stdio.h>
int main()
{
    double Y,x;
    int n;
    printf("Enter the value of x :");
    scanf("\n%lf",&x);
    printf("Enter the value of n :");
    scanf("\n%d",&n);
    if(n==1)
    {
        Y = 1 + x ;
    }
    else if(n==2)
    {
        Y = 1 + x/n;
    }
    else if(n==3)
    {
        Y = 1 + x*n;
    }
    else if(n>3||n<1)
    {
        Y = 1 + n*x;
    }
    else
    {
        printf("Incorrect input");
    }
    printf("Value of function Y is : %.2lf",Y);
    return 0;
}
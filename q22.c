#include<stdio.h>
int main()
{
    int i,n,x=1;
    printf("Enter the number:");
    scanf("\n%d",&n);
    for(i=1;i<=n;i++)
    {
      x=x*i;
    }
    printf("Factorial of n is :%d\n",x);
    return 0;
}
#include<stdio.h>
int main()
{
    int i,x,n;
    printf("Enter the value of x :");
    scanf("\n%d",&x);
    for(i=1;i<=10;i++)
    {
     n=x*i;
      printf("\n%d*%d=%d\n",x,i,n);
    }
    return 0;
}
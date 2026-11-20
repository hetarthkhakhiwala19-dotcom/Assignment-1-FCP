#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the Number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum = sum + 1;
        }
    }
    if(sum > 2)
    {
        printf("Not a Prime\n");
    }
    else
    {
        printf("Prime\n");
    }
    return 0;
}
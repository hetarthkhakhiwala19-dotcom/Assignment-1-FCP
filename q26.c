#include<stdio.h>
int main()
{
    int i,n,even_sum=0,odd_sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even_sum= even_sum + i;
        }
        else
        {
            odd_sum= odd_sum + i;
        }
    }
    printf("Odd Number sum is : %d\n",odd_sum);
    printf("Even Number sum is : %d\n",even_sum);
    return 0;
}
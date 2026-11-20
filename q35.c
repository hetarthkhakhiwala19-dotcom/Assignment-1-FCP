#include<stdio.h>
int main()
{
    int N,sum=0;
    printf("Enter the number N : ");
    scanf("%d",&N);
    while(N>0)
    {
        sum+=N%10;
        N/=10;
    }
    while(sum>9)
    {
        int temp_sum=0;
        while(sum>0)
        {
            temp_sum+=sum%10;
            sum/=10;
        }
        sum=temp_sum;
    }
    printf("Single digit sum of digits is :%d",sum);
    return 0;
}
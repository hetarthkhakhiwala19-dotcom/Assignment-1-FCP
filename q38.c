#include<stdio.h>
int main()
{
    int i,N,result;
    printf("Enter the number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        result=i*i;
        printf("%d\n",result);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n[100],x,j,i,tamp;
    printf("Enter the total number of numbers:");
    scanf("%d",&x);
    printf("Numbers are :");
    for(i=0;i<x;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Print the. Numbers :\n");
    for(i=0;i<x;i++)
    {
        printf("%d\n",n[i]);
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<x-i-1;j++)
        {
            if(n[j]>n[j+1])
            {
                tamp=n[j];
                n[j]=n[j+1];
                n[j+1]=tamp;
            }
        }
    }
    printf("Numbers after arrangement :\n");
    for(i=0;i<x;i++)
    {
        printf("%d\n",n[i]);
    }
    printf("Min is %d\nMax is %d\n",n[0],n[x-1]);
    return 0;
}
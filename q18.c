#include<stdio.h>
int main()
{
    int a,b,c,M;
    printf("Enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    M=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Maximum is %d\n",M);
    return 0;
}
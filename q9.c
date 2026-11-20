#include<stdio.h>
int main()
{
    int H,M,S,ts;
    printf("Enter the time in hours, minutes and seconds: ");
    scanf("%d%d%d",&H,&M,&S);
    ts=H*3600+M*60+S;
    printf("The time in seconds is %d",ts);
    return 0;
}
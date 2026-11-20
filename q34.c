#include<stdio.h>
int main()
{
    int x,i,n=0,y;
    x=0;
    y=1;
    printf("%d\n",x);
    printf("%d\n",y);
    while(n<=20)
    {
        i=x+y;
        x=y;
        y=i;
        printf("%d\n",i);
        n++;
    }
}
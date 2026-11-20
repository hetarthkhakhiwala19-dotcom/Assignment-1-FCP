#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
    {
     printf("Max is a ");
    }
    else 
    {
    printf("Max is c");
    }
}
else
{
    if(b>c)
    {
        printf("Max is b");

    }
    else
    {
        printf("Max is c");
    }
}
return 0;
}

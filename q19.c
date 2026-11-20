#include<stdio.h>
int main()
{
   char ch;
    printf("Enter the value of ch:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("Lower case");
    }
    else
    {
        printf("Upper case");
    }
    return 0;
}
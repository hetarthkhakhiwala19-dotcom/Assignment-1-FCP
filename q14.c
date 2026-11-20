#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    scanf(" %c", &x);
    if(x>'A'&&x<'Z')
    {
        printf("The character is an uppercase letter");
    }
    else if(x>'a'&&x<'z')
    {
        printf("The character is a lowercase letter");
    }
    else if(x>=0&&x<=9)
    {
        printf("The character is a digit");
    }
    else
    {
        printf("The character is a special character");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int Units;
    float Rate;
    printf("Enter the Number of Units :");
    scanf("%d",&Units);
    if(Units<=200)
    {
        Rate = 0.5*Units;
        printf("Rate is ₹%f\n",Rate);
    }
    else if(Units>200&&Units<=400)
    {
        Rate = 100 + (Units-200)*0.65;
        printf("Rate is ₹%f\n",Rate);
    }
    else if(Units>400&&Units<=600)
    {
        Rate = 230 + (Units-400)*0.8;
        printf("Rate is ₹%f\n",Rate);
    }
    else if(Units>600)
    {
        Rate = 425 + (Units-600)*1.25;
        printf("Rate is ₹%f\n",Rate);
    }
    else
    {
        printf("Invalid Input Number of Units");
    }
    return 0;

}
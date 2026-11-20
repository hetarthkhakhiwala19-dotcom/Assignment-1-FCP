#include<stdio.h>
int main()
{
    int E,P,C,M,H,Total,Percentage;
    printf("Enter the marks obtained in five subjects: ");
    scanf("%d%d%d%d%d",&E,&P,&C,&M,&H);
    Total = E + P + C + M + H;
    Percentage = Total/5;
    if(Percentage>=90)
    {
        printf("Grade A");
    }
    else if(Percentage<90 && Percentage>=80)
    {
        printf("Grade B");
    }
    else if(Percentage<80 && Percentage>=70)
    {
        printf("Grade C");
    }
    else if(Percentage<70 &&Percentage>=50)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
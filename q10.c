#include<stdio.h>
int main()
{
    int P,C,M,E;
    printf("Enter the marks of Physics, Chemistry, Maths and English: ");
    scanf("%d%d%d%d",&P,&C,&M,&E);
    
    float CM=P/2+C/2+M/2+E/2;
    printf("The cut marks is %f",CM);
    return 0;
}
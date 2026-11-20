#include<stdio.h>
int main()
{
    int b,h;
    printf("Enter the base and height of triangle: ");
    scanf("%d%d",&b,&h);
    float A=0.5*b*h;
    printf("The area of triangle is %f",A);
    return 0;
}
#include<stdio.h>
int main()
{
    int p,r,t;
    printf("Enter the value of p,r,t: ");
    scanf("%d%d%d",&p,&r,&t);
    double si=(p*r*t)/100;
    printf("The simple interest is%f",si);
    return 0;

}
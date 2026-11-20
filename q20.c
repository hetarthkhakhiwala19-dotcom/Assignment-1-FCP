#include<stdio.h>
int main()
{
    float a,b,choice;
    printf("Enter the numbers:");
    scanf("%f%f",&a,&b);
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Addition=%.2f",a+b);
        break;
        case 2:
        printf("Substration=%.2f",a-b);
        break;
        case 3:
        printf("Multiplication=%.2f",a*b);
        break;
        case 4:
        printf("Division=%.2f",a/b);
        break;
        default:
        printf("Invalid Operator");
}
    return 0;
}
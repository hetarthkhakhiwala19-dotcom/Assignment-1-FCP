#include<stdio.h>
int main()
{
    float a,b,result;
    char op;
    printf("Enter the numbers:");
    scanf("%f%f",&a,&b);
    printf("Enter the operator:");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        result = a+b;
        printf("Addition=%.2f",result);
        break;
        case '-':
        result = a-b;
        printf("Substration=%.2f",result);
        break;
        case '*':
        result = a*b;
        printf("Multiplication=%.2f",result);
        break;
        case '/':
        result = a/b;
        if(b!=0)
        {
        printf("Division=%.2f",result);
    }
    else
    {
        printf("Devision by zero not possible");
    }
    break;
    default:
        printf("Invalid Operator");
}
    return 0;
}
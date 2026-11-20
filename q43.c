#include<stdio.h>
int main()
{
    int Sales,Commission,Extra;
    printf("Enter the Sales:");
    scanf("%d",&Sales);
    if(Sales<=500)
    {
        Commission = 0.05*Sales;
        printf("Commission is ₹%d\n",Commission);
    }
    else if(Sales>500&&Sales<=2000)
    {
        Commission = 35 + (Sales-500)*0.1; 
        printf("Commission is ₹%d\n",Commission);
    }
    else if(Sales>2000&&Sales<=5000)
    {
        Commission = 185 + (Sales-2000)*0.12;
        printf("Commission is ₹%d\n",Commission);
    }
    else if(Sales>5000)
    {
        Commission = Sales*0.125;
        printf("Commission is ₹%d\n",Commission);
    }
    else
    {
        printf("Invalid Value of Sales");
    }
    return 0;
}
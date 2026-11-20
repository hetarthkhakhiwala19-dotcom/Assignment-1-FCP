#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,result;
    printf("Enter the values of x and y :");
    scanf("\n%d%d",&x,&y);
    result = pow(x,y);
    printf("The Result of X to power Y is : %d\n",result);
    return 0;
}
#include<stdio.h>
int main()
{
    int M,P,C,H,E;
    printf("Enter the marks of Maths, Physics, Chemistry, Hindi, English: ");
    scanf("%d%d%d%d%d",&M,&P,&C,&H,&E);
    double total=M+P+C+H+E;
    double percentage=(total/500)*100;
    printf("The percentage is %lf",percentage);
    return 0;   
}

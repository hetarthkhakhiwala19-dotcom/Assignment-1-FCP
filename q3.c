#include <stdio.h>
int main()
{
double basic,DA,HRA;
printf("Enter the basic salary: ");
scanf("%lf",&basic);
DA=basic*0.1;
HRA=basic*0.2;
double gross=basic+DA+HRA;
printf("gross salary is %lf",gross);
return 0;
}
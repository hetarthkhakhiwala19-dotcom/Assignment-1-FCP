#include<stdio.h>
int main()
{
   double celcius,farenheit;
   printf("Enter the temperature in Farenheit: ");
   scanf("%lf",&farenheit);
   celcius=(farenheit-32)*5/9;
   printf("The temperature in Celsius is %lf",celcius);
   return 0;
}
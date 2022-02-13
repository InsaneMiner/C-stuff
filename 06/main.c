#include <stdio.h>


int main(void)
{
 int numerator;
 int denominator;

 printf("Enter numerator: ");
 scanf("%f", &numerator);
 printf("Enter denominator: ");
 scanf("%f", &denominator);

 if (numerator % denominator == 0)
 {
   printf("There is not a remainder");
 }
 else
 {
   printf("There is a remainder");
 }
}
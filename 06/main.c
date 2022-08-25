#include <stdio.h>


int main(void)
{
 int numerator;
 int denominator;

 printf("Enter numerator: ");
 scanf("%d", &numerator);
 printf("Enter denominator: ");
 scanf("%d", &denominator);

 if (numerator % denominator == 0)
 {
   printf("There is not a remainder");
 }
 else
 {
   printf("There is a remainder");
 }
}

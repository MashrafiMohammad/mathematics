/*
  Program Name:Calculator
  Author:Sheikh Mashrafi Mohammad
  Language Used:"C"
*/
#include <stdio.h>
#include <conio.h>

int main()
{
   int num1, num2;
   printf("Please enter a number: ");
   scanf("%d", &num1);
   printf("Please enter another number: ");
   scanf("%d", &num2);

   printf("%d+%d=%d\n", num1, num2, num1+num2);
   printf("%d-%d=%d\n", num1, num2, num1-num2);
   printf("%d*%d=%d\n", num1, num2, num1*num2);
   printf("%d/%d=%d\n", num1, num2, num1/num2);

   return 0;
}

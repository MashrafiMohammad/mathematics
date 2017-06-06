/*
  Program Name:Calculator
  Author:Sheikh Mashrafi Mohammad
  Language Used:"C"
*/

#include <stdio.h>
#include <conio.h>

int main()  // Main function
{
    double num1, num2;  //  Variable declared

    printf("Please enter a number: ");  // Print function
    scanf("%lf", &num1); // Scan function

    printf("Please enter another number: "); // Print function
    scanf("%lf", &num2); // Scan function

    double sum, minusresult, product, dividebyresult;  //  Variable declared
    sum=num1+num2;
    minusresult=num1-num2;
    product=num1*num2;
    dividebyresult=num1/num2;

    printf("The sum of your entered numbers is: %lf\n", sum);                           // Print function
    printf("The difference of your entered numbers is: %lf\n", minusresult);           // Print function
    printf("The product of your entered numbers is: %lf\n", product);                 // Print function
    printf("The division result of your entered numbers is: %lf\n", dividebyresult); // Print function

    return 0;
}

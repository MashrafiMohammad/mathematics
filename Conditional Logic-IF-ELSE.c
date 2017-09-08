#include<stdio.h>
#include<conio.h>

int main()
{
    int n;

    printf("Please enter a number to identify whether it's positive or negative: ");
    scanf("%d", &n);

    if(n>0) {

            printf("The number is positive\n");

    } else if(n<0) {

            printf("The number is negative\n");

    } else if(n==0) {

            printf("It's ZERO!");

    }


    return 0;
}

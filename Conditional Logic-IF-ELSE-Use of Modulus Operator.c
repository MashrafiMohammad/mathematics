#include <stdio.h>

int main()
{
    int number;

    printf("Please enter a number to identify whether it's even or odd: ");
    scanf("%d", &number);

    if(number%2==0)
        {
            printf("It's an even integer");
        }
    else
        {
            printf("It's an odd integer");
        }

    return 0;
}

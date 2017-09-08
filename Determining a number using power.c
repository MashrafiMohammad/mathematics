#include <stdio.h>
#include <math.h>

int main()
{
    int input_base;
    int input_power;

    printf("Please enter the base:");
    scanf("%d", &input_base);
    printf("Please enter the power:");
    scanf("%d", &input_power);

    long long int result;
    result=pow(input_base, input_power);
    printf("Result: %lli", result);

    return 0;
}

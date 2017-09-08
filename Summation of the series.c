#include<stdio.h>
#include<conio.h>
int main()
{
    int ft;
    int lt;
    int not;


    printf("Please enter the first term of the series:");
    scanf("%d",&ft);
    printf("Please enter the last term of the series:");
    scanf("%d",&lt);
    printf("Please enter the number of the terms of the series:");
    scanf("%d",&not);

    int sum=(ft+lt)*not/2;

    printf("%d\n", sum);

    return 0;
}

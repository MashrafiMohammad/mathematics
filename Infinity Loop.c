#include<stdio.h>

int main()
{
    int n;

    printf("Enter 0 to start the infinity loop:");
    scanf("%d",&n);

    while(n==0)
    {
        printf("%d", n);
    }
    n++;
    return 0;
}

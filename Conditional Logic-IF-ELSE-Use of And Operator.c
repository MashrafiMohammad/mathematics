#include <stdio.h>

int main()
{
    char ch;
    printf("Please enter a letter to identify whether it's upper-case or lower-case: ");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z')
    {
        printf("%c is a lower case letter", ch);
    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("%c is a upper case letter", ch);
    }

    return 0;
}

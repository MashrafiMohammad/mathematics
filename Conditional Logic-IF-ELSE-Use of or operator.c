#include <stdio.h>
#include <conio.h>

int main()
{
    char vowel;

    printf("Enter a character to identify whether it's vowel or consonant: ");
    scanf("%c", &vowel);

    if(vowel=='a'||vowel=='e'||vowel=='i'||vowel=='o'||vowel=='u'||vowel=='A'||vowel=='E'||vowel=='I'||vowel=='O'||vowel=='U')
        {
            printf("The character you entered is vowel\n", vowel);
        } else {
            printf("The character you entered is consonant", vowel);

        }
    return 0;
}

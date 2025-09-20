#include <stdio.h>

int main()
{
    char ab;
    printf("Enter the word to check\n");
    scanf("%c", &ab);

    if (ab >= 'a' && ab <= 'z')
    {
        printf("Lower case");
    }
    else if (ab >= 'A' && ab <= 'z')
    {
        printf("uppercase");
    }
    else
    {
        printf("not a english letter");
    }
}
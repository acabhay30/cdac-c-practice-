#include<stdio.h>

int main()
{
    int num = 0;
    printf ("Enter the number");
    scanf("%d", &num);

    int d1 = num / 100;
    int d2 = (num / 10) %10;
    int d3 = num % 10;

    int rum;
    rum = (d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3);

    if (rum==num)
    {
        printf("it is armstrong number");
    }
    else
    {
        printf("IT IS NOT A ARMSTARONG NUMER");
    }


}
#include <stdio.h>

int main()
{
    int mark = 0;
    printf("enter the marks ");
    scanf("%d", &mark);
    if (mark < 30)
    {
        printf("your grade is C");
    }
    else if (mark <= 30 && mark < 70)
    {
        printf("your grade is B");
    }
    else if (mark <= 70 && mark < 90)
    {
        printf("your score is A");
    }
    else if (90 <= mark && mark <= 100)
    {
        printf("your grade is A+");
    }
}
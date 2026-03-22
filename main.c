#include <stdio.h>

int main(void)
{
    int number1;
    int number2;

    printf("type two numbers: \n");
    scanf("%i %i", &number1, &number2);

    if (number1 > number2)
    {
        printf("number 1 was larger\n");
    }
    else if (number2 > number1)
    {
        printf("number 2 was larger\n");
    }
    else
    {
        printf("numbers 1 and 2 are equal\n");
    }
    return 0;
}
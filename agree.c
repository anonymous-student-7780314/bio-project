#include <stdio.h>

int main(void)
{
    char c;

    printf("do you agree? [y/n] ");
    scanf("%c", &c);

    if (c == 'y')
    {
        printf("user agrees\n");
    }
    else
    {
        printf("user disagrees\n");
    }
    return 0;
}
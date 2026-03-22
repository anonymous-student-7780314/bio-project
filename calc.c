#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("what is x and what is y: ");
    scanf("%i %i", &x, &y);

    printf("%i\n", x + y);
}
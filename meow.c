#include <stdio.h>
#include <stdbool.h>




void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

int main(void)
{
    meow(3);
    return 0;
}
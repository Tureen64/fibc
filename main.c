#include <stdio.h>
#include <limits.h>
#define ULL unsigned long long

ULL getFib(ULL index)
{
    if (index <= 1)
    {
        return index;
    }

    ULL a = 0;
    ULL b = 1;

    for (ULL i = 2; i <= index; ++i)
    {
        if (ULLONG_MAX - b < a)
        {
            printf("Fibonacci number out of range of unsigned long long.\n");
            return 0;
        }

        ULL next = a + b;

        a = b;
        b = next;
    }

    return b;
}

int main()
{
    ULL input = 0;

    printf("Index of fibonacci sequence (0-93): ");
    scanf("%llu", &input);

    printf("%llu\n", getFib(input));
    return 0;
}
#include <stdio.h>

extern long test(long);

int main()
{
    printf("%ld", test(5));
    printf("Hello, World!\n");
    return 0;
}
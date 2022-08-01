#include <stdio.h>

int main()
{
    // 1
    printf("%d\n", sizeof(char*));

    // 2
    int a = 1;
    int *p = &a;

    printf("%d\n", *p);

    return 0;
}
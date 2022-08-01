// 1:00:00
#include <stdio.h>

int main()
{
    // 1
    int a = 5 % 2;
    printf("%d\n", a);

    // 2
    int b = 3;
    int c = 5;

    b = b^c;
    c = b^c;
    b = b^c;

    printf("b = %d, c = %d\n", b, c);

    return 0;
}
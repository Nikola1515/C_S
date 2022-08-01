#include <stdio.h>

int main()
{
    // 1
    int arr1[10] = {0};
    int *p1 = arr1;

    for(int i = 0; i < 10; i++)
    {
        *p1 = i;
        p1++;
        // 等于 *p1++ = i 。
    }

    // 2
    int *p2 = NULL; // NULL 使指针初始化为空指针。

    return 0;
}
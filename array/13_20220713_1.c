#include <stdio.h>
#include <string.h> // “strlen”函数在“string.h”中。

int main()
{
    // 1
    char arr1[] = {'a', 'b', 'c', '\0'};

    printf("%d\n", strlen(arr1)); // “strlen”遇到“\0”停止计算字符串长度，不包含“\0”。

    // 2
    int arr2[] = {1, 2, 3, 4, 5};
    int dimension = sizeof(arr2) / sizeof(int); // 求数组长度。

    for(int i = 0; i < dimension; i++)
    {
        printf("%d\n", arr2[i]);
    }

    // 3
    for(int i = 0; i < dimension; i++)
    {
        printf("%p\n", &arr2[i]); // “&”是取地址符号,“%p”打印地址。
    }

    // 4
    int arr3[3][4];

    for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                arr3[i][j] = i + j; // “[][]”是定义二维数组。
                printf("%d", arr3[i][j]);
            }

            printf("\n");
        }

    return 0;
}

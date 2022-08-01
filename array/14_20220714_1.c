#include <stdio.h>

void bubble_sort(int arr[]; int dimension)
{
    for(int i = 0; i < dimension-1; i++)
    {
        int break_value = 1;

        for(int j = 0; j < dimension-1-i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int support = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = support;
                break_value = 0;
            } 
        }

        if(break_value == 1)
        {
            break;
        }
    }
}

switch(expression)
{
    case constant-expression:
        statement(s);
        break; /* 可选的 */
    case constant-expression:
        statement(s);
        break; /* 可选的 */

    /* 可以有任意数量的 case 语句 */

    default: /* 可选的 */
        statement(s);
}

// 对数组进行传参，实际传递的是数组首元素的地址。
// 数组名是数组首元素的地址。两个例外: sizeof(数组名) 是计算整个数组的大小； &数组名 是取出整个数组的地址。
// break 语句只能用于 for 和 switch ，在 if 语句中不能使用，因为 if 不是循环语句，所以不能用 break 来结束。
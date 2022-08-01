#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[] = "abc";    //"abc" = {'a', 'b', 'c', '\0'}
    char arr2[] = {'a', 'b', 'c', '\0'};    //'\0'是转义字符，它是字符串的结束标志。
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));
    return 0;
}
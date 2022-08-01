#include <stdio.h>

enum Sex
{
    Male,
    Female,
    Secret
};

int main()
{
    printf("%d\n", Male);
    printf("%d\n", Female);
    printf("%d\n", Secret);

    enum Sex she = Female;
    she = Secret;
    printf("%d\n", she);

    return 0;
}
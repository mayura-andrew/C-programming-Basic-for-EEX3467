#include <stdlib.h>
#include <stdio.h>
int main()
{

    int luckyNumber[] = {0,
                         1,
                         2,
                         3,
                         4,
                         5,
                         6,
                         7};

    int i;

    for (i = 0; i < 8; i++)
    {
        printf("%d\n", luckyNumber[i]);
    };

    return 0;
}
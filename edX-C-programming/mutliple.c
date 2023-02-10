#include <stdio.h>

int main()
{
    int howMany = 0;
    int sum = 0;
    int enginePower = 0;
    int resistance = 0;
    int height = 0;
    int weight = 0;

    scanf("%d", &howMany);
    for (int i = 0; i < howMany; i++)
    {
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        sum = sum + ((enginePower + resistance) * (weight - height));
    }
    printf("sum equals %d\n", sum);

    return 0;
}
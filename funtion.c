#include <stdlib.h>

int main()
{

    sayHi("Mike", 40);
    return 0;
}

void sayHi(char name[], int age)
{
    printf("%s is %d years old.\n", name, age);
}
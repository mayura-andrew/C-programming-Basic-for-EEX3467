#include <stdlib.h>

int main()
{
    char grade = 'F';

    switch (grade)
    {
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did alright.");
        break;
    case 'C':
        printf("You did bad.");
        break;
    case 'D':
        printf("You did very bad.");
        break;
    case 'F':
        printf("You Failed.");
        break;
    default:
        printf("You did not like that grade.");
        break;
    }

    return 0;
}
#include <stdio.h>

int main(void){

    int count = 0;
    char firstName[101];
    char lastName[101];

    scanf("%d", &count);

    for (int i =0; i < count; i++){
        scanf("%s %s", firstName, lastName);
      

        printf("%s %s\n", lastName, firstName);
    }
    return 0;
}
#include <stdio.h>

int main(void){

    char word[101];
    int count = 0;

    scanf("%d %s", &count, word);

    for (int i =0; i < count; i++){
        printf("%s\n", word);
    }
    return 0;
}
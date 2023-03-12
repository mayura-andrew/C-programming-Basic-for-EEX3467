#include <stdio.h>
#include <string.h>

int main() {
    char word[51];
    int length, i, half_length, first_half_has_t = 0, second_half_has_t = 0;

    scanf("%s", word);

    length = strlen(word);
    half_length = length / 2;

    for (i = 0; i < half_length; i++) {
        if (word[i] == 't' || word[i] == 'T') {
            first_half_has_t = 1;
            break;
        }
    }

    for (i = half_length; i < length; i++) {
        if (word[i] == 't' || word[i] == 'T') {
            second_half_has_t = 1;
            break;
        }
    }

    if (first_half_has_t) {
        printf("1\n");
    } else if (second_half_has_t) {
        printf("2\n");
    } else {
        printf("-1\n");
    }

    return 0;
}

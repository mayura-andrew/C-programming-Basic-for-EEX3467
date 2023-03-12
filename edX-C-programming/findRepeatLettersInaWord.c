#include <stdio.h>
#include <string.h>

int main() {
    char word[51];
    int length, i, count = 0;

    scanf("%s", word);

    length = strlen(word);

    // Sort the letters of the word alphabetically using bubble sort
    for (i = 0; i < length - 1; i++) {
        int j;
        for (j = 0; j < length - i - 1; j++) {
            if (word[j] > word[j + 1]) {
                char temp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = temp;
            }
        }
    }

    // Iterate through the letters of the word and count the number of letters that occur multiple times
    for (i = 0; i < length - 1; i++) {
        if (word[i] == word[i + 1]) {
            count++;
            i++; // skip ahead to avoid counting the same letter multiple times
        }
    }

    printf("%d\n", count);

    return 0;
}

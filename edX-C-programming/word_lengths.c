#include <stdio.h>
int main(void) {
    //! showArray(word, cursors=[t])
    //! showArray(length, cursors=[i])
    int i = 0;
    int t = 0;
    int l = 0;
    int j = 0;
    int nbWords = 0;
    char word[11];
    int length[10];//length[5] number of 5-letter-long words in the text
    for(i=0;i<10;i++){
        length[i]=0;
    }
    scanf("%d", &nbWords);
    for(t=0;t<nbWords;t++){
        scanf("%s", word);
        l = 0;
        while(word[l]!='\0'){
            l++;
        }
        length[l] = length[l] + 1;
        printf("%s %d ", word,l);
    }
    for(j=0;j<10;j++){
        printf("There are %d words with %d letters.\n", length[j], j);
    }
    return 0;   
}

//chatgrp answer

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int num_words, i, max_length = 0;
//     char word[101];

//     scanf("%d", &num_words);

//     for (i = 0; i < num_words; i++) {
//         scanf("%s", word);
//         int length = strlen(word);
//         if (length > max_length) {
//             max_length = length;
//         }
//     }

//     printf("%d\n", max_length);

//     return 0;
// }


//given answer

// #include <stdio.h>

// int main(void) {

//     int i, length;
//     int max = 0;
//     int num = 0;
//     char word[101];

//     scanf("%d", &num);
//     for(i = 0 ; i < num ; i++){
//         scanf("%s", word);
//         length = 0;
//         while(word[length]!='\0'){
//             length++;
//         }
//         if (length > max)
//         	max = length;
//     }

//     printf("%d\n", max);
//     return 0;
// }



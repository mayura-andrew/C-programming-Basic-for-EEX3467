#include <stdio.h>
int main(void) {
    //! showArray(word, cursors=[i])
    char word[50];
    int i = 0, tot = 0;
    scanf("%s", word);
    while (word[i]!='\0') 
        i++;
        if (i % 2 == 0){
            printf("1" );
        } else {
            printf("2");
        }
        
        
    return 0;
}
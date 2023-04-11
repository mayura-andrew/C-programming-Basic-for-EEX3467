#include <stdio.h>
int main(void)
{
    char words[68][40];
    int line;
    for (line = 0; line < 68; line++)
    {
        scanf("%s", words[line]);
    }
    for (int i = 67; i >= 0; i--)
    {
        printf("%s ", words[i]);
    }
    return 0;
}

//given answer 
// #include <stdio.h>

// int main(void) {
// 	char text[68][41];
// 	int i;
// 	for(i = 0 ; i < 68 ; i ++){
// 		scanf("%s", text[i]);
// 	}
// 	for(i = 0 ; i<68 ; i++){
// 		printf("%s ", text[67-i]);
// 	}
	
// 	return 0;
// }

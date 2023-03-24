#include <stdio.h>
int main() {
    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[2];
    double listDouble[2];

    printf("%zu CHAR \n", sizeof(c));
    printf("%zu INT \n", sizeof(i));
    printf("%zu DOUBLE \n", sizeof(d));
    printf("=================\n");
    printf("%zu List of Char\n", sizeof(listChar));
    printf("%zu List of Int\n", sizeof(listInt));
    printf("%zu List of Double \n", sizeof(listDouble));
    return(0);

    
}


#include <stdio.h>
int main(void) {

    int count, totalSize = 0, lengthOfCode;
    char typeofCode;

    scanf("%d", &count);
    for (int i = 0; i < count; i ++) {
        scanf("%d %c", &lengthOfCode, &typeofCode);

        if ( typeofCode == 'c') {
            totalSize += lengthOfCode * sizeof(char);

        } else if (typeofCode == 'i'){
            totalSize += lengthOfCode * sizeof(int);
        } else if ( typeofCode == 'd') {
            totalSize += lengthOfCode * sizeof(double);
        } else {
            printf("Invalid tracking code type");
            return 0;
        }

    }
    printf("%d bytes", totalSize);

    return 0;
}
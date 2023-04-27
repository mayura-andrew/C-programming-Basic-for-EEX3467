// #include <stdio.h>
// #include <stdlib.h> // for atoi and atof
// #include <string.h> // for strcmp

// int main(int argc, char *argv[]) {
//     int count, i;
//     double percost, totalCost;
        
//     printf("I have %d arguments from the command line: \n", argc);
//     for (i = 0; i<argc; i++) {
//          printf("Argument %d: %s\n", i, argv[i]);
//     }
        
//     // if (argc == 3) {
//     //     compare = strcmp(argv[1], "-e");
//     //     if (compare ==0) {
//     //         printf("argv[1] equals -e \n");
//     //     } else {
//     //         printf("argv[1] does not equal -e \n");
//     //     }
//     count = atoi(argv[1]);
//     percost = atoi(argv[2]);
//     totalCost = count * percost;

//     printf("%s plants for %lf dollars each cost %lf dollars.\n", argv[1], percost, totalCost);
    
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h> // for atoi and atof
#include <string.h> // for strcmp

int main(int argc, char *argv[]) {
    int count, i;
    double percost, totalCost;
        
    printf("I have %d arguments from the command line: \n", argc);
    for (i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
        
    if (argc != 3) {
        printf("Usage: %s count percost\n", argv[0]);
        return 1;
    }
    
    count = atoi(argv[1]);
    if (count <= 0) {
        printf("Invalid count: %s\n", argv[1]);
        return 1;
    }
    
    percost = atof(argv[2]);
    if (percost <= 0.0) {
        printf("Invalid percost: %s\n", argv[2]);
        return 1;
    }

    totalCost = count * percost;
    printf("%d plants for %lf dollars each cost %lf dollars.\n", count, percost, totalCost);
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h> // Include the stdlib library for malloc and free functions

char * allocateString(int numChars); // Declare the function prototype

int main(void) {
    int lengthLight, lengthDark;
    char *strLight, *strDark;
    
    scanf("%d %d", &lengthLight, &lengthDark); 
    strLight = allocateString(lengthLight); // Call allocateString to allocate memory for strLight
    strDark = allocateString(lengthDark); // Call allocateString to allocate memory for strDark
    
    scanf("%s", strLight);
    scanf("%s", strDark);
    printf("Local settings: %s - %s\n", strLight, strDark);
    
    free(strLight); // Free the memory allocated for strLight
    free(strDark); // Free the memory allocated for strDark
    
    return 0;
}

char * allocateString(int numChars){
    char* ptr; // Declare a pointer variable to store the allocated memory address
    
    ptr = (char*) malloc((numChars + 1) * sizeof(char)); // Allocate memory for numChars characters and a null terminator
    
    return ptr; // Return the pointer to the allocated memory
}

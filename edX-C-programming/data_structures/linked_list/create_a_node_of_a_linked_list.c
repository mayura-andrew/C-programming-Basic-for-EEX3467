#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit *next;
};

struct digit *createDigit(int dig);
int main(void)
{
    struct digit *numberptr;
    int digitToStore = 5;
    numberptr = createDigit(digitToStore);
    printf("We are storing the digit %d and the pointer %p at memory location %p.\n", numberptr->num, numberptr->next, numberptr);
    free(numberptr);
    return 0;
}

struct digit *createDigit(int dig)
{
    struct digit *ptr;
    ptr = (struct digit *)malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

// #include <stdio.h>
// #include <stdlib.h>

// struct student {
//       char name[50];
//       int age;
//       struct student *next;
// };

// struct student *createStudent(char studentName[], int studentAge);

// // Write other function prototypes here (if any)

// int main(void) {
//     struct student *studptr;
//     int myAge;
//     char myName[50];
//     scanf("%s %d", myName, &myAge);
//     studptr = createStudent(myName, myAge);
//     printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
//     free(studptr);
//     return 0;
// }

// // Write your createStudent function here (and any other functions you see fit)

// struct student *createStudent(char studentName[], int studentAge) {
//     // Allocate memory for a new student struct
//     struct student *newStudent = (struct student*) malloc(sizeof(struct student));
    
//     // Write the student's name and age into the new struct
//     strcpy(newStudent->name, studentName);
//     newStudent->age = studentAge;
    
//     // Set the next pointer to NULL (this will be the last student in the list)
//     newStudent->next = NULL;
    
//     // Return a pointer to the new student struct
//     return newStudent;
// }

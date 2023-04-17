#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[50];
    int age;
    struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
void copyStr(char *source, char *target);

// Write other function prototypes here (if any)

int main(void)
{
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}
struct student *createStudent(char studentName[], int studentAge) {
    struct student *ptr;
    ptr = (struct student *) malloc(sizeof(struct student));
    copyStr(studentName, ptr->name);
    ptr->age = studentAge;
    ptr->next = NULL;
    return ptr;
}
void copyStr(char *source, char *target)
{
    int i = 0;
    while (source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}
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

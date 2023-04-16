#include <stdio.h>
struct student
{
    /* data */
    char firstName[30];
    char lastName[30];
    double aveGrade;
    int birthYear;
};

int main(void) {
    struct student learner;
    printf("First Name: ");
    scanf("%s", learner.firstName);
    printf("Last Name: ");
    scanf("%s", learner.lastName);
    printf("Year of birth: ");
    scanf("%d", &learner.birthYear);
    printf("Average grade: ");
    scanf("%lf", &learner.aveGrade);

        
    printf("Name: %s %s\n", learner.firstName, learner.lastName);
	printf("Year of birth: %d\n",learner.birthYear);
	printf("Average grade: %.2lf\n",learner.aveGrade);
    
	return 0;
    
}

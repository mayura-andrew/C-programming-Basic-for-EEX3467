#include <stdlib.h>
int main(void) {
    //! showMemory(start=272)
    int * array;
    array = (int *) malloc(5*sizeof(int));
    array[0] = 3;
    array[1] = 44;
    array[2] = 2;
    * (array + 3) = 7;
    * (array + 4) = -1;
    free(array);
    return 0;
}

//another 
//new example of the use of malloc
#include <stdio.h>
#include <stdlib.h>

int * allocateIntArray(int);
double findAverage(int *,int);

int main(void){
    //! showMemory(start=272)
    int num, i;
    int * array;
    double average;
    printf("How many grades would you like to enter?");
    scanf("%d",&num);
    array = allocateIntArray(num);
    printf("Please enter %d grades: ",num);
    for(i=0;i<num;i++){
        scanf("%d",array+i);
    }
    average = findAverage(array,num);
    printf("The average grade is %.2f.\n",average);
    free(array);
    return 0;
}

int * allocateIntArray(int num){
    int * ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}

double findAverage(int * array, int num){
    int i;
    double average = 0.0;
    for(i=0;i<num;i++){
        average += array[i];
    }
    average = average / num;
    return average;
}
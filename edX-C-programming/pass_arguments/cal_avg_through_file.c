#include <stdio.h>

int main(void) {
    FILE *ifile;  /* ifile is a variable name - you could use any other name here. 
                         However, the '*' is important - we are working with a pointer. 
                         We call this a file pointer. */
    int i, num, N,tot = 0;
    double avg;
    ifile = fopen("studentGrades.txt", "r"); /* open file for reading. 
                                                         The "r" stands for reading. */
        
    fscanf(ifile, "%d", &N); /* Read first number from the file.
                                    Just like scanf(), the only difference is the 
                                    file pointer that gets passed in as well. */
                                    
   // printf("There are %d numbers in the file.\n", N);
        
    for (i = 0; i<N; i++) {
        fscanf(ifile, "%d", &num);
        tot += num;
        
    }
    avg =  tot / N;
    printf("%.2lf", avg);
        
    fclose(ifile); /* closes the file */
        
    return 0;
}

// given answer 
#include <stdio.h>

int main(void) {
	FILE *ifile;  
	int i, N, grade, sum;
	double average;
	
	sum = 0;
	
	ifile = fopen("studentGrades.txt", "r"); 
	
	fscanf(ifile, "%d", &N); 
	
	for (i = 0; i<N; i++) {
		fscanf(ifile, "%d", &grade);
		sum += grade;
	}
	
	fclose(ifile); 
	average = (double) sum / N;
	printf("%.2lf\n", average);
	
	return 0;
}
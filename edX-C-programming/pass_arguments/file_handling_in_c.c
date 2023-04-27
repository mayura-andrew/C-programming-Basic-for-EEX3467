

    #include <stdio.h>

    int main(void) {
        FILE *ifile;  /* ifile is a variable name - you could use any other name here. 
                         However, the '*' is important - we are working with a pointer. 
                         We call this a file pointer. */
        int i, num, N;
        
        ifile = fopen("my_first_file.txt", "r"); /* open file for reading. 
                                                         The "r" stands for reading. */
        
        fscanf(ifile, "%d", &N); /* Read first number from the file.
                                    Just like scanf(), the only difference is the 
                                    file pointer that gets passed in as well. */
                                    
        printf("There are %d numbers in the file.\n", N);
        
        for (i = 0; i<N; i++) {
            fscanf(ifile, "%d", &num);
            printf("I read %d from the file. \n", num);
        }
        
        fclose(ifile); /* closes the file */
        
        return 0;
    }

// ______________________________________________________________________________________________________________________

// This requires a file by the name of "my_first_file.txt" to exist in the same directory as the code.Here is a sample file:

// 9
// 56  3  8  -11  0  -45  55  2  78

// Then change the code slightly to read from "my_second_file.txt" which contains doubles rather than integers. Sample:

// 6
// 13.5 22.7 8.0 -4.3 2.99 6.66
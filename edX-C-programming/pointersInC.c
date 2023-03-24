#include <stdio.h>
int main(){
    //! showMemory(start=65520)
    int a = 42;
    double d = 58.394;
    char c = 'r';
    int * addressOfA = &a;
    printf("address of a: %p\n", addressOfA);
    double * addressOfD = &d;
    printf("address of d: %p\n", addressOfD);
    char * addressOfC = &c;
    printf("address of c: %p\n", addressOfC);
    return 0;
}

//32bit -- 4bits pointer address
//64bit -- 8 bits pointer address

// \p is used to print that particular pointer value
// when we are going to declaring a variable for store particlur pointer value we need to use * before the that variable then it will be store pointer of that value
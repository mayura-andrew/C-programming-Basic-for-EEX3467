#include <stdio.h>
int sumOfDigits(int);
int main(void) {
	//! showMemory(start=65520)
	int num, sum;
    
	scanf("%d", &num);
	sum = sumOfDigits(num);
	printf("%d", sum);
	return 0;
}

int sumOfDigits(int n) {
	if (n<10) 
	    return n;
	else  
	    return (n%10 + sumOfDigits(n/10));
}
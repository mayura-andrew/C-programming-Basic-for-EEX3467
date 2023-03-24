#include <stdio.h>


void applyElixir( int * ageAddr);

int main() {

    int age;
    scanf("%d", &age);
    printf("Your current age is %d.\n", age);

    applyElixir(&age);
    
    printf("Your new age will be %d!\n", age);

    return 0;
}


void applyElixir(int * ageAddr){
    int age = *ageAddr;
    if(age <= 20) {
        *ageAddr = age * 2;
    
    } else {
        *ageAddr = age - 10;
    }
}

//given answer

#include <stdio.h>

void elixir(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	elixir(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


void elixir(int *age){
	if (*age>20){
		*age -= 10;
	} else {
		*age *= 2;
	}
}
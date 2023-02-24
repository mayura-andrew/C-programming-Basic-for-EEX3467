#include <stdio.h>
int main(void) {
    double dOne, dTwo;
    int iOne, iTwo;
    printf("Please enter two decimals: ");
    scanf("%lf %lf", &dOne, &dTwo);
    printf("I read dOne = %lf, dTwo = %lf.\n", dOne, dTwo);
    iOne = (int) dOne;
    iTwo = (int) dTwo;
    printf("iOne = %d, iTwo = %d.\n", iOne, iTwo);
    printf("%d / %d = %d.\n", iOne, iTwo, iOne/iTwo);
    return 0;
}



#include <stdio.h>
int main(void) {
    int current_population = 0;
    double projected_population = 0;
    double ex_population = 0;
    int future;
    scanf("%d %lf", &current_population, &ex_population );

    ex_population =  current_population * (1 + (ex_population/100));
    future = (int) ex_population;

    printf("%d", future);  
}


#include <stdio.h>

int main(void) {
    double amount, price_per_book;
    int num_of_books;

    scanf("%lf %lf", &amount, &price_per_book);

    num_of_books = (int) amount / price_per_book;

    printf("%d", num_of_books);
    return 0;
}


#include <stdio.h>

int main(void) {
    double num_of_cement;
    double total_cement;
    int tot;
    scanf("%lf", &num_of_cement);
    total_cement = num_of_cement / 120.0;
    tot = (int) (total_cement * 45.0 );
    printf("%d", tot);

    return 0;


}

#include <stdio.h>
#include <math.h>

int main() {
    double cement_needed;
    double bags_needed;
    int total_cost;
    
    scanf("%lf", &cement_needed);
    
    bags_needed = ceil(cement_needed / 120.0);
    total_cost = (int) bags_needed * 45.0;
    
    printf("%d", total_cost);
    
    return 0;
}
#include <stdio.h>

int main(void) {
	double cement;
	int bags;
	scanf("%lf", &cement);
	bags = cement/120 + 1; //we know that the amount of cement is not a multiple of 120
	printf("%d", bags*45);
	return(0);
}



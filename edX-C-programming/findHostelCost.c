#include <stdio.h>

int main(void){

    int age, weight, cost;
    scanf("%d", &age);
    scanf("%d", &weight);

    if (age == 60) {
        cost = 0;
    } else if( age < 10) {
        cost =  5;
    } else {
        cost = 30;
        if (weight > 20 ){
        cost +=  10;
    }
    }
    printf("%d\n", cost);

    



    return 0;
}

//given answer
// #include <stdio.h>

// int main(){
//     int is60, isLessThan10, luggageMoreThan20;
// 	int age = 0;
// 	int luggageWeight = 0;

// 	scanf("%d %d", &age, &luggageWeight);

// 	is60 = age == 60;
// 	isLessThan10 = age < 10;
// 	luggageMoreThan20 = luggageWeight > 20;

// 	if(is60){
// 		printf("0");
// 	} else {
// 		if(isLessThan10){
// 			printf("5");
// 		} else {
// 			if(luggageMoreThan20){
// 				printf("40");
// 			} else {
// 				printf("30");
// 			}
// 		}
// 	}
// 	return 0;
// }
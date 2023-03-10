#include <stdio.h>

int main(void){

    int guessValue;
    int guessCount;
    int userGuess;

    scanf("%d", &guessValue);
    while(userGuess != guessValue){

        scanf("%d", &userGuess);

        if (userGuess == guessValue){
            guessCount += 1;
            break;
        } else if (userGuess > guessValue){
             guessCount += 1;
            printf("it is more\n");
        } else {
            printf("it is less\n");
            guessCount += 1;
        }
       


    }
    printf("Number of tries needed %d:\n", guessCount);
    
    return 0;

}

// gpt answer 
// #include <stdio.h>

// int main() {
//     int secretNumber, guess, count = 0;
//     scanf("%d", &secretNumber);

//     do {
//         scanf("%d", &guess);
//         count++;
//         if (guess < secretNumber) {
//             printf("it is more\n");
//         } else if (guess > secretNumber) {
//             printf("it is less\n");
//         }
//     } while (guess != secretNumber);

//     printf("Number of tries needed: \n %d", count);
//     return 0;
// }

// given answer

// #include <stdio.h>

// int main()
// {
//     int secretNumber;
//     scanf("%d",&secretNumber);
//     int proposal = secretNumber + 1;
//     int nbTries = 0;
//     while (proposal != secretNumber)
//     {
//         scanf("%d",&proposal);
//         if (proposal < secretNumber)
//             printf("it is more\n");
//         if (proposal > secretNumber)
//             printf("it is less\n");
//         nbTries = nbTries + 1;
//     }
//     printf("Number of tries needed:\n%d\n",nbTries);

//     return 0;
// }
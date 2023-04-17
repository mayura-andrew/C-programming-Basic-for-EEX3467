#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void readDate(struct date *nowptr) {
    scanf("%d%d%d", &((*nowptr).year), &((*nowptr).month), &((*nowptr).day));
}

void printDate(struct date now) {
    printf("%02d/%02d/%4d\n", now.month, now.day, now.year);
}

struct date advanceDay(struct date today) {
    struct date tomorrow;

    // set initial values for tomorrow's date
    tomorrow.year = today.year;
    tomorrow.month = today.month;
    tomorrow.day = today.day + 1;

    // check for end of month and adjust month and day as necessary
    if (tomorrow.day > 30) {
        tomorrow.month++;
        tomorrow.day = 1;
    }
    if (tomorrow.month > 12) {
        tomorrow.year++;
        tomorrow.month = 1;
    }

    return tomorrow;
}

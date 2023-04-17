#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void printDate(struct date);
void readDate(struct date *);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date *nowptr) {
    scanf("%d%d%d", &((*nowptr).year), &((*nowptr).month), &((*nowptr).day));
}

void printDate(struct date now) {
    printf("%02d/%02d/%4d\n", now.month, now.day, now.year);
    printf("%02d/%02d/%4d\n", now.month + 1, now.day +1 , now.year);

}

#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit *next;
};
struct digit *createDigit(int dig);
struct digit *append(struct digit *end, struct digit *newDigitptr);
void printNumber(struct digit *start);
void freeNumber(struct digit *start);
struct digit * readNumber();

int main(void)
{
    //! stack=showMemory(start=65520,cursors=[start,newDigitptr,end,tmp])
    struct digit *start, *newDigitptr, *end, *tmp;
    int first = 5;
    int second = 3;
    int third = 7;
    start = createDigit(first);
    end = start;
    newDigitptr = createDigit(second);
    end = append(end, newDigitptr);
    newDigitptr = createDigit(third);
    end = append(end, newDigitptr);
    printNumber(start);
    // free needs to be added  here
    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);
    return 0;
}

struct digit *append(struct digit *end, struct digit *newDigitptr)
{
    //! heap=showMemory(start=260, cursors=[end,newDigitptr])
    end->next = newDigitptr;
    end = newDigitptr;
    return (end);
}

struct digit *createDigit(int dig)
{
    //! heap=showMemory(start=260, cursors=[ptr])
    struct digit *ptr;
    ptr = (struct digit *)malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

void printNumber(struct digit *start)
{
    struct digit *ptr = start;
    while (ptr != NULL)
    {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}
#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    
    // Fill in your main function here
    struct point *poly;
    int N;
    scanf("%d", &N);
    poly = (struct point *)malloc(N * sizeof(struct point));
    initializePoly(poly, N);
    printPoly(poly, N);
    free(poly);
    return 0;
    

}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point *ptr, int N){
    int i;
    for (i=0; i < N; i++) {
        ptr[i].x = -i;
        ptr[i].y = i*i;
    }
}
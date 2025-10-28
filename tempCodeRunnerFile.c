#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// function prototypes
void input(void);
void calculate(int num);
void output(int num);

// global declarations
int user_input;

// structure

typedef struct {
    double x;
    double y;
} point;

point *array;

int main(void) {

    //1. Input
    input();

    //2. Process
    calculate(user_input);

    // 3. Output
    output(user_input);

    free(array); // cleanup
    return 0;
}

void input(void) {
    printf("\nEnter the size of the f(x)=x^2 graph (int): ");
    scanf("%d", &user_input);
}

void calculate(int num) {
    point *array = malloc(num * sizeof(point));

    for (int i = 0; i < num; i++) {
        array[i].x = i;
        array[i].y = pow(i, 2);
    }
}

void output(int num) {
    for (int i = 0; i < num; i++) {
        printf("Coord %d: (%f, %f)", i, array[i].x, array[i].y);
    }
}
#include <stdio.h>
#include "root.h"

static int showIterations = 0;

void setShowIterations(int flag) {
    showIterations = flag;
}

double absVal(double x) {
    return (x < 0) ? -x : x;
}

int dEquals(double a, double b) {
    /* since a == b ? does not work on floats */
    return (a - b) < EPSILON && (b - a) < EPSILON;
}

double power(double x, int n) {
    int i = 0;
    double result = 1.0;
    for (; i < n; i++) {
        result *= x;
    }
    return result;
}

float rootf(float number) {
    return (float) nRoot(number, 2);
}
double rootd(double number) {
    return nRoot(number, 2);
}

double nRoot(double number, int root) {
    double x = number;
    double next = 0;
    double delta = 0;
    int iteration = 0;

    if (dEquals(number, 0) || dEquals(number, 1)) return number;
    if (root < 0) return -1;

    while (1) {
        /* newtons formula */
        next = x - ((power(x, root) - number) / (root * power(x,root-1)));
        /* end newtons formula */

        delta = absVal(next - x);

        if(delta < EPSDOUBLE) {
            return next;
        }

        iteration++;

        if(showIterations){
            printf("Iteration %d: Approx = %.12f, Error = %.12f\n", iteration, x, delta);
        }
        x = next;
    }
}

#include <stdio.h>
#include "root.h"
#include "math_float.h"

/* Iterations flag status */
static int displayIterations = 0;

void setShowIterations(int flag) {
    displayIterations = flag;
}

/* math functions */
double absVal(double x) {
    return (x < 0) ? -x : x;
}

int dEquals(double a, double b) {
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
/* end math functions */

float rootf(float number) {
    return nRoot_float(number, 2, EPSFLOAT);
}

double rootd(double number) {
    return nRoot(number, 2, EPSDOUBLE);
}


double nRoot(double number, int root, double EPS) {
    double x = number, next = 0, delta = 0;
    int iteration = 0;

    if (dEquals(number, 0) || dEquals(number, 1)) return number;
    if (root < 0) return -1;

    while (1) {
        /* newtons formula */
        next = x - ((power(x, root) - number) / (root * power(x,root-1)));
        /* end newtons formula */

        delta = absVal(next - x);
        if(delta < EPS) {
            return next;
        }

        iteration++;
        if(displayIterations){
            printf("Iteration %d: Approx = %.12f, Error = %.12f\n", iteration, x, delta);
        }
        x = next;
    }
}



float nRoot_float(float number, int root, float EPS) {
    float x = number, next = 0, delta = 0;
    int iteration = 0;

    if (dEquals_float(number, 0) || dEquals_float(number, 1)) return number;
    if (root < 0) return -1;

    while (1) {
        /* newtons formula */
        next = x - ((power_float(x, root) - number) / ((float) root * power_float(x,root-1)));
        /* end newtons formula */

        delta = absVal_float(next - x);
        if(delta < EPS) {
            return next;
        }

        iteration++;
        if(displayIterations){
            printf("Iteration %d: Approx = %.12f, Error = %.12f\n", iteration, x, delta);
        }
        x = next;
    }
}


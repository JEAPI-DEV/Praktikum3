#include "root.h"
#include "math_float.h"

/* math functions */
float absVal_float(float x) {
    return (x < 0) ? -x : x;
}

int dEquals_float(float a, float b) {
    return (a - b) < EPSILON && (b - a) < EPSILON;
}

float power_float(float x, int n) {
    int i = 0;
    float result = 1.0;
    for (; i < n; i++) {
        result *= x;
    }
    return result;
}



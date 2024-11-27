#define EPSFLOAT 1.E-4F
#define EPSDOUBLE 1.E-8
#define ERROR -1
#define MAX 200

/* For being able to compare floats/doubles */
#define EPSILON 0.000001

/*
 * calculate the square root of x in single precision .
 * @param x a positiv real number.
 * @return square root of x
 */
float rootf(float number);
/*
 * calculate the square root of x in double precision .
 * @param x a positiv real number.
 * @return square root of x
 */
double rootd(double number);

/* show immediate results or not */
void setShowIterations(int flag);

/* calculate any root of any number R^(>0) */
double nRoot(const double number, const int root, double EPS);

float nRoot_float(float number, int root, float EPS);


/* math functions */

/* get absolute value but as a function instead of using the macro. */
double absVal(double x);

/* calculate the power of x^n */
double power(double x, int n);


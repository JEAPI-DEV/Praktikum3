#define EPSFLOAT 1.E-4F
#define EPSDOUBLE 1.E-8
#define ERROR -1
#define MAX 200

#define EPSILON 0.000001

float rootf(float number);      /* Function for single precision */
double rootd(double number);    /* Function for double precision */
void setShowIterations(int flag);

double absVal(double x);
double power(double x, int n);
double nRoot(const double number, const int root);
int dEquals(double a, double b);
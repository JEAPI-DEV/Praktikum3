#include <stdio.h>
#include <string.h>
#include "root.h"

double nRoot(double number, int root);

int main(int argc, char *argv[]) {
    double rf, rd, err;
    int j = 1;
    double result = 0.0;
    double x = 0.0;

    if (argc > 1 && strcmp(argv[1], "-s") == 0) {
        setShowIterations(1);
    }

    printf(" x   | rootf      | rootd      | err\n");
    printf("-----+------------+------------+-----------\n");

    for (x = 0.0; x <= 4.0; x += 0.25) {
        rf = rootf((float) x);
        rd = rootd(x);
        err = absVal(rd - rf);

        printf("%5.2f | %10.8f | %10.8f | %10.2e\n", x, rf, rd, err);
    }

    printf("\n\n\n\n--------------------------------\n\n\n\n");

    for (x = 0; x <= 250; x += 32.5) {
        for(j = 1; j <= 5; j++) {
            result = nRoot(x, j);
            printf("The %d-th root of %6.2f is approximately %.12f\n", j, x, result);
        }
    }




    return 0;
}

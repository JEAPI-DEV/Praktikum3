#include <stdio.h>
#include <string.h>
#include "root.h"

int main(int argc, char *argv[]) {
    double rf, rd, err;
    int j = 1;
    double result = 0.0;
    double x = 0.0;

    if (argc > 1 && strcmp(argv[1], "-s") == 0) {
        setShowIterations(1);
    }

    printf(" x    | rootf      | rootd      | err\n");
    printf("------+------------+------------+-----------\n");

    for (x = 0.0; x <= 4.0; x += 0.25) {
        rf = rootf((float) x);
        rd = rootd(x);
        err = absVal(rd - rf);

        printf("%5.2f | %10.8f | %10.8f | %10.2e\n", x, rf, rd, err);
    }

    printf("\n\n\n\n--------------------------------\n\n\n\n");

    x = 100000;
    for(j = 2; j <= 8; j++) {
        result = nRoot(x, j, EPSDOUBLE);
        err = absVal(x - power(result, j));

        printf("%d-th root of %6.2f is approximately %16.12f  probe: %10.2e\n", j, x, result, err);
    }

    printf("\n\n");

    x = 1000000;
    for(j = 2; j <= 8; j++) {
        result = nRoot(x, j, EPSDOUBLE);
        err = absVal(x - power(result, j));

        printf("%d-th root of %6.2f is approximately %16.12f  probe: %10.2e\n", j, x, result, err);
    }


    return 0;
}

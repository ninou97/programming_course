#include <stdio.h>

#define length 6

int main() {
    float a[length] = {0.3, 3.1, -0.214, 52.1, -13.003, 80.99};
    float b[length] = {0.5, 12.45, 0.1, -22.1, 143.003, -135.909};
    float c[length];
    
    for (int i=0; i < length; i++) {
        c[i] = a[i] + b[i];
    }

    float max_in_a = -99999.0;
    int i = 0;
    while (i < length) {
        if (a[i] > max_in_a) {
            max_in_a = a[i];
        }
        
        i += 2;
    }

    i = 1;
    int cnt_less_than_zero = 0;
    while (i < length) {
        if (b[i] < 0.0) {
            cnt_less_than_zero++;
        }

        i += 2;
    }


    printf("max real in a: %f\n", max_in_a);
    printf("count of less than zero in b: %d\n", cnt_less_than_zero);


    float arithmetic_mean = 0.0;

    for (int i = 0; i < length; ++i) {
        arithmetic_mean += c[i];
    }
    arithmetic_mean /= length;


    printf("%f", arithmetic_mean);
}

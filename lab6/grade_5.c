#include <stdio.h>
#include <stdlib.h>

int isPrime(int a) {
    int n = 2;
    a = abs(a);
    while (n < a) {
        if (a % n == 0) {
            break;
        }
        n++;
    }

    if (n == a) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x[6] = {3, 12, -17, 21, 11, 7};
    int y[3];

    int i = 1;
    int j = 0;
    while (i < 6) {
        y[j] = x[i];
        i += 2;
        j++;
    }


    int countOfPrimesInX = 0;
    for (int i = 0; i < (sizeof(x)/sizeof(x[0])); ++i) {
        if (isPrime(x[i])) {
            countOfPrimesInX++;
        }
    }

    int countOfPrimesInY = 0;
    for (int i = 0; i < 3; ++i) {
        if (isPrime(y[i])) {
            countOfPrimesInY++;
        }
    }

    printf("Count of primes in x: %d\n", countOfPrimesInX);
    printf("Count of primes in y: %d\n", countOfPrimesInY);


    float arithmetic_mean = 0;
    for (int i = 0; i < 9; ++i) {
        arithmetic_mean += x[i];
        if (i<3) {
            arithmetic_mean += y[i];
        }
    }
    arithmetic_mean /= 9;


    printf("arithmetic mean of elements in both x and y: %f", arithmetic_mean);


}


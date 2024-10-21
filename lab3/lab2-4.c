#include <stdio.h>

// prime numbers
int main() {
    int a;
    scanf("%d", &a);
    int n = 2;
    while (n < a && a % n != 0) {
        n++;
    }
    if (n == a) {
        puts("1");
    } else {
        puts("0");
    }
}

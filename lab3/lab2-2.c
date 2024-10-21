#include <stdio.h>

int main() {
    // Least common divisor (NOD)
    int a;
    int b;
    scanf("%d %d", &a, &b);

    int n = a;
    while(n % a != 0 || n % b != 0) {
        n++;
    }

    printf("%d", n);
}

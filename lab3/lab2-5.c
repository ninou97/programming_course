#include <stdio.h>

// prime number
int main() {
    int a;
    scanf("%d", &a);
    int s = 0, n = 2;
    while (n<a) {
        if (a % n == 0) {
            s++;
        }
        n++;
    }
    if (s == 0) {
        puts("1");
    }
    else {
        puts("0");
    }
}

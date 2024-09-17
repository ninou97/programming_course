#include <stdio.h>

int main() {
    float x;
    float y;

    printf("type x y: ");
    scanf("%f %f", &x, &y);

    if ((y <= x + 2) && (y >= -1) && (y <= -2*x - 1)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

}

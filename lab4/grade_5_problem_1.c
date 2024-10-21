#include <stdio.h>

int main() {
    int a = 3;
    int b = a*2-1;
    for (int i = 0; i < a; i++) {
        int ii = i;
        int iii = i;
        while (ii > 0) {
            printf(" ");
            ii--;
        }
        for (int j = 0; j < (b-(i*2)); j++) {
            printf("*");
        }
        while (iii > 0) {
            printf(" ");
            iii--;
        }
        printf("\n");
    }
}

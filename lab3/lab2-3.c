#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int n = 2;
    while (n < a) {
        if (a % n == 0) {
            break;
        }
        n++;
    }
    /*for (int n = 2; n < a; ++n) {*/
    /*    outer_n = n;*/
    /*    if (a % n == 0) {*/
    /*        outer_n = n;*/
    /*        break;*/
    /*    }   */
    /*}*/

    if (n == a) {
        puts("1");
    } else {
        puts("0");
    } 
}

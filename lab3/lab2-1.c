#include <stdio.h>

int main() {
    
    // Least common multiple (NOK)
    int n1;
    int n2;
    scanf("%d %d", &n1, &n2);

    int n = n1;
    while (!(n1%n == 0 && n2%n == 0)) {
        n--;
    }
    /*for (int i = n1; ; i--) {*/
    /*    printf("%d", i);*/
    /*    cnt++;*/
    /*}*/

    printf("%d",n);
}



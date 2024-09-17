#include <stdio.h>

int main() {
    int year;
    
    printf("type year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("YES\n");
    } else if (year % 100 == 0) {
        printf("NO");
    } else if (year % 4 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    /*printf("%d", input);*/
}

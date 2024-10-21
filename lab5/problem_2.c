#include <stdio.h>

int main() {
    int num = 0;
    int countOfEvenBits = 0;
    int countOfOddBits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int allEvenBits = 1431655765;
    int allOddBits = 1431655765 << 1;
    while (num != 0) {
        if (num & 1 & allEvenBits) {
            countOfEvenBits++;
        } 
        if (num & 1 & allOddBits) {
            countOfOddBits++;
        }

        num = num >> 1;
        allEvenBits = allEvenBits >> 1;
        allOddBits = allOddBits >> 1;
    }

    printf("The number of even set bits is: %d\n", countOfEvenBits);
    printf("The number of odd set bits is: %d\n", countOfOddBits);

    return 0;

}

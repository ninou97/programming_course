#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) 
    {
        if (num & 1) 
        {
            count++;
        }
        num = num >> 1;
    }
    printf("The number of set bits is: %d\n", count);
    printf("the number of unset bits is: %d\n", 32-count);
    return 0;
}

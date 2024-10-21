#include <stdio.h>
#include <string.h>

// variant 7
// Problem: swap first and last letters in a sentence

int main() {
    //example sentence
    char s[] = "Lorem ipsum dolor sit amet";

    printf("%s\n", s);

    // use strtok to tokenize sentence string to word strings
    char *word;
    word = strtok(s, " ");

    while (word != NULL) {
        // swap first and last letters
        int size = strlen(word);
        char temp = word[0];
        word[0] = word[size-1];
        word[size-1] = temp;

        // iterate over words
        printf("%s ", word);
        word = strtok(NULL, ", ");
    }
}

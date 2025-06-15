//read the file content word by word 
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("input.txt", "r");  // Open file in text mode
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    char word[256];  // Buffer to hold each word

    while (fscanf(file, "%255s", word) == 1) {
        printf("%s\n", word);
    }

    fclose(file);
    return 0;
}

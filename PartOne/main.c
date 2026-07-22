#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv) {

    FILE* file_object = fopen("file.txt", "r");
    if(file_object == NULL) {
        perror("Unable to open file");
        return EXIT_FAILURE;
    }

    char buffer[512];
    while(fgets(buffer, sizeof(buffer), file_object) != NULL) {
        printf("%s", buffer);
    }
    printf("\n");

    // check the first line
    int white_spaces = 0;
    for(size_t i = 0; i < sizeof(buffer); i++) {
        if(buffer[i] == ' ') {
            white_spaces++;
        }
    }
    printf("Number of White Spaces: %d\n", white_spaces);

    int f_close = fclose(file_object);
    if(f_close == EOF) {
        perror("Unable to close file");
    } else if(f_close == 0) {
        printf("File closed: Success.\n");
    }

    return EXIT_SUCCESS;
}
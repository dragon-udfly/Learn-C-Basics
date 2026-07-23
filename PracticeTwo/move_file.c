#include <stdio.h>

int main() {
    // Moves "file.txt" into "new_folder"
    if (rename("file.txt", "new_folder/file.txt") == 0) {
        printf("Moved successfully.\n");
    } else {
        printf("Move failed.\n");
    }
    return 0;
}
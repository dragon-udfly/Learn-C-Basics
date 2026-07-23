#include <stdio.h>
#include <stdlib.h>

void WriteToFile() {
    // Open in Write Mode ("w"). Creates the file if it doesn't exist.
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    
    fprintf(file, "Hello, this is a test line.\n");
    fclose(file); // Always close files to free memory
    printf("Write successful.\n");
}

void ReadFromFile() {
    char buffer[256];
    // Open in Read Mode ("r")
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error: File does not exist.\n");
        return;
    }
    
    printf("File contents:\n");
    // fgets reads line by line until the end of the file
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }
    fclose(file);
}

int main() {
    WriteToFile();
    ReadFromFile();
    return 0;
}
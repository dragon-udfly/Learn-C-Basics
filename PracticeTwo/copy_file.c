#include <stdio.h>

void CopyFile(const char *source_path, const char *dest_path) {
    FILE *src = fopen(source_path, "rb");
    FILE *dest = fopen(dest_path, "wb");

    if (src == NULL || dest == NULL) {
        printf("Error opening files.\n");
        return;
    }

    char buffer[4096]; // 4KB chunk size for efficient memory usage
    size_t bytes_read;

    // Read chunks of data and write them immediately
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), src)) > 0) {
        fwrite(buffer, 1, bytes_read, dest);
    }

    fclose(src);
    fclose(dest);
    printf("File copied successfully.\n");
}

int main() {
    CopyFile("source.txt", "copy_of_source.txt");
    return 0;
}
#include <stdio.h>
#include <sys/stat.h>

int main() {
    struct _stat file_info;

    // Use _stat for Windows
    if (_stat("file.txt", &file_info) == 0) {
        
        printf("Size: %ld bytes\n", file_info.st_size);
        
        // Bitwise AND (&) used to check the file type in Windows
        if (file_info.st_mode & _S_IFDIR) {
            printf("Type: This is a folder.\n");
        } 
        else if (file_info.st_mode & _S_IFREG) {
            printf("Type: This is a regular file.\n");
        }

    } else {
        printf("Error: Could not retrieve information.\n");
    }

    return 0;
}
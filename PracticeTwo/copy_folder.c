#include <stdlib.h> // Required for system()
#include <stdio.h>

int main() {
    // /E copies all subfolders (even empty ones)
    // /I assumes the destination is a folder
    // /Q hides the command output from the console
    int result = system("xcopy \"source_folder\" \"destination_folder\" /E /I /Q");
    
    if (result == 0) {
        printf("Folder copied successfully.\n");
    } else {
        printf("Folder copy failed.\n");
    }

    return 0;
}
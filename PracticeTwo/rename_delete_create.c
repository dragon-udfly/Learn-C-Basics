#include <stdio.h>
#include <direct.h> // Uncomment if using Windows

int main() {
    // --- FILE MANAGEMENT ---
    
    // Rename a file (returns 0 on success)
    if (rename("file.txt", "renamed_file.txt") == 0) {
        printf("File renamed successfully.\n");
    }

    // Delete a file (returns 0 on success)
    if (remove("renamed_file.txt") == 0) {
        printf("File deleted successfully.\n");
    }

    // --- FOLDER MANAGEMENT ---
    
    // Create a folder. 
    // Windows: _mkdir("new_folder");
    if (_mkdir("new_folder") == 0) {
        printf("Folder created successfully.\n");
    }

    // Delete a folder (folder MUST be empty)
    if (rmdir("new_folder") == 0) {
        printf("Folder deleted successfully.\n");
    }

    return 0;
}
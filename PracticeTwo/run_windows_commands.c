#include <stdio.h>
#include <stdlib.h>

int main() {
  // Executes the command just like typing it in CMD
  int status = system("mkdir my_new_folder");

  // Returns 0 if the command was successful
  if (status == 0) {
    printf("Folder created successfully.\n");
  } else {
    printf("Command failed.\n");
  }

  return 0;
}
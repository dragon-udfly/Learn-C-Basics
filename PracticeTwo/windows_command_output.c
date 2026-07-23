#include <stdio.h>
#include <stdlib.h>

int main() {
  char buffer[128];
  
  // 1. Run the "ipconfig" command and open a pipe to Read ("r") its output
  FILE* pipe = _popen("ipconfig", "r");
  
  if (pipe == NULL) {
    printf("Error: Failed to run command.\n");
    return 1;
  }

  printf("Captured Output:\n\n");
  
  // 2. Read the output line by line using standard fgets
  while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
    printf("%s", buffer); // You could save this to an array or parse it here
  }

  // 3. Close the pipe when finished
  _pclose(pipe);
  
  return 0;
}
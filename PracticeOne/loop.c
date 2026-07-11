#include <stdio.h>
#include <string.h>

int main() { 

    int state = 1;
    char name[50] = "";
    
    while(state) {
        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin); 
        name[strcspn(name, "\n")] = '\0';
        
        if(strlen(name) != 0) {
            printf("Hello %s\n", name);
        } else {
            state = 0;
        }
    }
    printf("Program Finished.");

    return 0;
}
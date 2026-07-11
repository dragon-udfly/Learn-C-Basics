#include <stdio.h>

int main() {

    int response = 0;
    int state = 1;

    do { 
        printf("Menu: \n");
        printf("1. Run\n2. Wait\n3. Stop\n");
        printf("Response: ");
        scanf("%d", &response);

        switch(response) {
            case 1: 
                printf("Running..........\n");
                break;
            case 2: 
                printf("Waiting..........\n");
                break;
            case 3: 
                printf("Stopped.\n");
                state = 0;
                break;
            default: 
                break;
        }

    } while(state);
    printf("Program Finished.\n");
}
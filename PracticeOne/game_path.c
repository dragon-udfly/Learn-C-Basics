#include <stdio.h>
#include <string.h>

int main() {

    int score = 0;
    printf("Enter Score: ");
    scanf("%d", &score);
    fgetc(stdin);

    char current_path = '\0';
    printf("Enter Current Path: ");
    scanf("%c", &current_path);

    char path[4] = "";

    switch(current_path) {
        case 'A': 
            switch((score % 3)) {
                case 0: 
                    strcpy(path, "A -> N -> G");
                    break;
                case 1: 
                    strcpy(path, "A -> B -> E");
                    break;
                case 2: 
                    strcpy(path, "A -> C -> T");
                    break; 
                default:
                    break;
            }
            break;
        case 'D': 
            switch((score % 2)) {
                case 0: 
                    strcpy(path, "D -> M -> E");
                    break;
                case 1: 
                    strcpy(path, "D -> J -> H");
                    break;
                default: 
                    break;
            }
            break;
        case 'V': 
            switch((score % 3)) {
                case 0: 
                    strcpy(path, "V -> Y -> T");
                    break;
                case 1: 
                    strcpy(path, "V -> Z -> G");
                    break;
                case 2: 
                    strcpy(path, "V -> U -> H");
                    break;
                default: 
                    break;
            }
        default: 
            break;
    }

    printf("Your Path: %s\n", path);
    
    return 0;
}
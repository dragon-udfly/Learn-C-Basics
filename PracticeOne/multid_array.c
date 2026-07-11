#include <stdio.h>

int main() { 

    int number_tree[5][5][5] =  {0};

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            for(int k = 0; k < 5; k++) { 
                number_tree[i][j][k] = (k + j + i) + ((3 + k) * (3 + i)) + (k % 3) ;
            }
        }
    }

    printf("Initialization Finished.\n");
    printf("Array: \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            for(int k = 0; k < 5; k++) { 
                printf("%d ", number_tree[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    } 
    printf("\n");

    return 0;
}
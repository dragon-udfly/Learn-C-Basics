#include <stdio.h>

typedef struct { 
    int x;
    int y;
} Coordinate;

void TranslateBox(Coordinate points[], 
                  int size, 
                  int translation_matrix[]) {
    for(int i = 0; i < size; i++) {
        points[i].x += translation_matrix[0];
        points[i].y += translation_matrix[1];
    }
}

int main() {

    Coordinate points[4] = {0};

    points[0].x = 3; 
    points[0].y = 2;
    points[1].x = 3;
    points[1].y = 5;
    points[2].x = 6;
    points[2].y = 5;
    points[3].x = 6;
    points[3].y = 2;

    printf("Original Points: \n");
    for(int i = 0; i < 4; i++) {
        printf("p%d: (%d, %d) ", i, points[i].x, points[i].y);
    }
    printf("\n");

    int translation_matrix[] = {3, 4};
    TranslateBox(points, 4, translation_matrix);
    printf("Translated Points: \n");
    for(int i = 0; i < 4; i++) { 
        printf("p%d: (%d, %d) ", i, points[i].x, points[i].y);
    }
    printf("\n");
    return 0;
}
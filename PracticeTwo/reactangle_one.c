#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    char rectangle_letter = '\0';
    printf("Enter Character for Rectangle: ");
    scanf("%c", &rectangle_letter);
    fgetc(stdin);

    char description[100] = "";
    printf("Enter Description for Rectangle: ");
    fgets(description, sizeof(description), stdin);
    description[strcspn(description, "\n")] = '\0';

    int width = 0;
    printf("Enter Width (cm): ");
    scanf("%d", &width);
    int height = 0;
    printf("Enter Height (cm): ");
    scanf("%d", &height);

    int perimeter = (2 * width) + (2 * height);
    printf("Perimeter: %d cm\n", perimeter);

    int area = (width * height);
    printf("Area: %d cm2\n", area);

    int half_rectangle_width = ceil((width / 2));
    printf("Half Rectangle Width: %d cm\n", &half_rectangle_width);

    int half_rectangle_height = ceil((height / 2));
    printf("Half Rectangle Height: %d cm\n", half_rectangle_height);

    int half_rectanlge_perimeter = (2 * half_rectangle_height) + (2 * half_rectangle_width);
    printf("Half Rectanlge Perimeter: %d cm\n", half_rectanlge_perimeter);

    int half_rectanlge_area = (half_rectangle_height * half_rectangle_width);
    printf("Half Rectangle Area: %d cm2\n", half_rectanlge_area);

    int rectangle_fit_count = floor(area / half_rectanlge_area);
    printf("Rectangle Fitting Count: %d\n", rectangle_fit_count);

    return 0;
}
#include <stdio.h>

int main() {

    int width = 232;
    int height = 322;
    int particles = 93233;

    float rate = 0.3;
    float value_error = 0.1;
    float diameter = 3.22;

    double planet_diameter = 23003.3;
    double growth_rate = 0.003;
    double weight = 32.3;

    char grade = 'B';
    char symbol = '^';
    char placeholder = '.';

    char name[] = "Dragon Ud Fly";
    char place[] = "New York";
    char random_text[] = "tex3023&(323)3233";

    printf("Width: %d\n", width);
    printf("Height: %d\n", height);
    printf("Particles: %d\n", particles);
    printf("Rate: %.1f\n", rate);
    printf("Error of Value: %.1f\n", value_error);
    printf("Diameter: %.2f\n", diameter);
    printf("Diameter of Planet: %.1lf\n", planet_diameter);
    printf("Growth Rate: %.3lf\n", growth_rate);
    printf("Weight: %.1lf\n", weight);
    printf("Grade: %c\n", grade);
    printf("Symbol: %c\n", symbol);
    printf("Placeholder: %c\n", placeholder);
    printf("Name: %s\n", name);
    printf("Place: %s\n", place);
    printf("Random Text: %s\n", random_text);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    int width = 0; 
    float rate = 0.0f;
    char grade = '\0';
    char name[100] = "";
    double diameter = 0.0;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Width: ");
    scanf("%d", &width);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    fgetc(stdin);

    printf("Enter Grade: ");
    scanf("%c", &grade);

    fgetc(stdin);

    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter Diameter: ");
    scanf("%lf", &diameter);

    printf("___________Summary___________\n");
    printf("Age: %d\n", age);
    printf("Width: %d\n", width);
    printf("Rate: %.1f\n", rate);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);
    printf("Diameter: %.2lf\n", diameter);

    
    return 0;
}
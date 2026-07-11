#include <stdio.h>
#include <string.h>

int main() {

    double mass = 0.0;
    int count = 0;
    char organism_name[100] = "";
    float growing_rate = 0.0f;
    char growing_type = '\0';
    int contamination = 0;
    char environment[100] = "";

    printf("Enter Mass: ");
    scanf("%lf", &mass);
    
    printf("Enter Organsim Count: ");
    scanf("%d", &count);

    fgetc(stdin);
    printf("Enter Organism Name: ");
    fgets(organism_name, sizeof(organism_name), stdin);
    organism_name[strcspn(organism_name, "\n")] = '\0';

    printf("Enter Growing Rate: ");
    scanf("%f", &growing_rate);

    fgetc(stdin);
    printf("Enter Growing Type: ");
    scanf("%c", &growing_type);

    printf("Enter If Contaminated: ");
    scanf("%d", &contamination);

    fgetc(stdin);
    printf("Enter Name of Environment: ");
    fgets(environment, sizeof(environment), stdin);
    environment[strcspn(environment, "\n")] = '\0';

    printf("**************** Summary *****************\n");
    printf("Name of Organism: %s\n", organism_name);
    printf("Environment: %s\n", environment);
    printf("Contamination: ");
    contamination ? printf("Yes\n") : printf("No\n");
    printf("Growing Rate: %.1fg/s\n", growing_rate);
    printf("Growing Type: %c\n", growing_type);
    printf("Mass of One Organism: %.1lfg\n", mass);
    printf("Organism Count: %d\n", count);
    printf("Total Mass: %.1lfg\n", (mass * count));
    printf("Total Time Spent: %.1lfs\n", ((mass * count) / growing_rate));
    return 0;
}
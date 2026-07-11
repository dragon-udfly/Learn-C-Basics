#include <stdio.h>

float calculateForce(float mass, float acceleration) {
    return (mass * acceleration);
}

float calculateResistance(float voltage, float current) {
    return (voltage / current);
}

int main() {

    float values_pairs[][2] = {
        {34.2, 0.2}, 
        {56.2, 0.3}, 
        {45.9, 0.2}, 
        {13.2, 1.0}, 
        {10.2, 2.3}, 
        {30.9, 1.2}
    };

    for(int i = 0; i < (sizeof(values_pairs) / sizeof(values_pairs[0])); i++) {
        printf("Force: %.1f\n", calculateForce(values_pairs[i][0], values_pairs[i][1]));
    }

    for(int i = 0; i < (sizeof(values_pairs) / sizeof(values_pairs[0])); i++) {
        printf("Resistance: %.1f\n", calculateResistance(values_pairs[i][0], values_pairs[i][1]));
    }

    return 0;
}
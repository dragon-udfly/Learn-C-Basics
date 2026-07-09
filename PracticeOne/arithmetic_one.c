#include <stdio.h>

int main() {

    float initial_velocity = 0.0;
    float final_velocity = 3.0;
    float time_place_A = 2.0;
    float time_place_B = 3.0;
    float time_place_C = 2.5;

    printf("Initial Velocity: %.1f\n", initial_velocity);
    printf("Final Velocity: %.1f\n", final_velocity);
    printf("Time at Place A: %.1f\n", time_place_A);
    printf("Time at Place B: %.1f\n", time_place_B);
    printf("Time at Place C: %.1f\n", time_place_C);

    float total_time = (time_place_A + time_place_B + time_place_C);
    printf("Total Time Spent: %.1f\n", total_time);

    float displacement = ((initial_velocity + final_velocity) / 2) * total_time;
    printf("Displacement: %.1f\n", displacement);

    return 0;
}
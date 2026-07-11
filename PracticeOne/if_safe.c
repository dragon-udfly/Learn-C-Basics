#include <stdio.h>

int main() {

    int window_A_closed = 0;
    printf("Is Window A Closed: ");
    scanf("%d", &window_A_closed);

    int window_A_locked = 0;
    if(window_A_closed) {
        printf("Is Window A Locked: ");
        scanf("%d", &window_A_locked);
    }

    int window_B_closed = 0;
    printf("Is Window B Closed: ");
    scanf("%d", &window_B_closed);

    int window_B_locked = 0;
    if(window_B_closed) {
        printf("Is Window B Locked: ");
        scanf("%d", &window_B_locked);
    }

    int front_door_closed = 0;
    printf("Is Front Door Closed: ");
    scanf("%d", &front_door_closed);

    int front_door_locked = 0;
    if(front_door_closed) {
        printf("Is Front Door Locked: ");
        scanf("%d", &front_door_locked);
    }

    int back_door_closed = 0;
    printf("Is Back Door Closed: ");
    scanf("%d", &back_door_closed);

    int back_door_locked = 0;
    if(back_door_closed) {
        printf("Is Back Door Locked: ");
        scanf("%d", &back_door_locked);
    }

    int window_A_safe = (window_A_closed && window_A_locked);
    int window_B_safe = (window_B_closed && window_B_locked);
    int front_door_safe = (front_door_closed && front_door_locked);
    int back_door_safe = (back_door_closed && back_door_locked);
    int total_windows_safe = (window_A_safe && window_B_safe);
    int total_doors_safe = (front_door_safe && back_door_safe);
    int total_safe = (total_windows_safe && total_doors_safe);

    printf("******************* Safe Summery ***********************\n");
    printf("Is Window A Safe: ");
    (window_A_safe) ? printf("Yes\n") : printf("No\n");
    printf("Is Window B Safe: ");
    (window_B_safe) ? printf("Yes\n") : printf("No\n");
    printf("Is Front Door Safe: ");
    (front_door_safe) ? printf("Yes\n") : printf("No\n");
    printf("Is Back Door Safe: ");
    (back_door_safe) ? printf("Yes\n") : printf("No\n");
    printf("Is Safe: ");
    (total_safe) ? printf("Yes\n") : printf("No\n");
    return 0;
}
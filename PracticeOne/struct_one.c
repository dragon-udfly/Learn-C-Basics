#include <stdio.h>
#include <string.h>

struct Player {
    char player_identifier[100];
    int player_speed;
    int player_health;
};

int main() {

    struct Player player_one = {0};

    strcpy(player_one.player_identifier, "orange_eater932");
    player_one.player_health = 2;
    player_one.player_speed = 34;

    printf("Player Identifier: %s\n", player_one.player_identifier);
    printf("Player Health: %d\n", player_one.player_health);
    printf("Player Speed: %d\n", player_one.player_speed);

    struct Player p1 = {"3banana923", 32, 2};
    
    printf("P1 identifier: %s\n", p1.player_identifier);
    printf("P1 health: %d\n", p1.player_health);
    printf("P1 speed: %d\n", p1.player_speed);
    

    return 0;
}
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    const int kfactor = 10;
    int load = 0;
    printf("Enter Load: ");
    scanf("%d", &load);

    int tag = 0;
    int room0_suffix = 4523;
    int room1_suffix = 5942;
    int room2_suffix = 8932;
    int room3_suffix = 3203;
    int room4_suffix = 9323;
    int room5_suffix = 9217;
    int room6_suffix = 4500;
    int room7_suffix = 1043;
    int room8_suffix = 2304;
    int room9_suffix = 1036;
    char room_string1[50] = "stone-fan";
    char room_string2[50] = "wind-ball";
    char room_string3[50] = "ginger-head";
    char room_string4[50] = "cat-leg";
    char room_string5[50] = "red-tree";

    int mod_of_load = (load % kfactor);
    char tag_type = '\0';
    char room_string[50] = "";

    switch(mod_of_load) {
        case 0: 
            tag = ceil((load + mod_of_load) / (kfactor + mod_of_load)) + room0_suffix;
            tag_type = 'A';
            strcpy(room_string, room_string5);
            break;
        case 1:
            tag = ceil((load + mod_of_load) / (kfactor + mod_of_load)) + room1_suffix;
            tag_type = 'G';
            strcpy(room_string, room_string2);
            break;
        case 2:
            tag = ceil((load + mod_of_load) / (kfactor + mod_of_load)) + room2_suffix;
            tag_type = 'B';
            strcpy(room_string, room_string3);
            break;
        case 3: 
            tag = ceil((load + mod_of_load) / (kfactor + mod_of_load)) + room3_suffix;
            tag_type = 'E';
            strcpy(room_string, room_string5);
            break;
        case 4: 
            tag = ceil((load + mod_of_load) / (kfactor + mod_of_load)) + room4_suffix;
            tag_type = 'T';
            strcpy(room_string, room_string1);
            break;
        case 5: 
            tag = ceil((load + mod_of_load) / (kfactor + mod_of_load)) + room5_suffix;
            tag_type = 'Q';
            strcpy(room_string, room_string4);
            break;
        case 6: 
            tag = ceil((load + mod_of_load) / (kfactor + mod_of_load)) + room6_suffix;
            tag_type = 'P';
            strcpy(room_string, room_string2);
            break;
        case 7: 
            tag = ceil((load + mod_of_load) / (kfactor + mod_of_load)) + room7_suffix;
            tag_type = 'K';
            strcpy(room_string, room_string3);
            break;
        case 8: 
            tag = ceil((load + mod_of_load) / (kfactor + mod_of_load)) + room8_suffix;
            tag_type = 'L';
            strcpy(room_string, room_string1);
            break;
        case 9: 
            tag = ceil((load + mod_of_load) / (kfactor + mod_of_load)) + room9_suffix;
            tag_type = 'V';
            strcpy(room_string, room_string5);
            break;
        default: 
            break;
    }

    printf("Generated Tag: %d\n", tag);
    printf("Tag Type: %c\n", tag_type);
    printf("Room String: %s\n", room_string);

    return 0;
}
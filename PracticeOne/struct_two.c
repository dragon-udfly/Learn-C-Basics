#include <stdio.h>

typedef struct {
    float width;
    float height;
    float length;
    float volume;
    float area;
} Box;

void CalculateVolume(Box *b) {
    float width = b -> width;
    float height = b -> height;
    float length = b -> length;

    if(width > 0 && height > 0 && length > 0) {
        b -> volume = (width * height * length);
    } else { 
        printf("Uninitialized Values\n");
    }
}

void CalculateSurfaceAreas(Box *b, float *s_area) { 
    *s_area = (b -> width * b -> height);
}

int main() {

    Box box1 = {0};
    box1.width = 200.3f;
    box1.height = 130.3f;
    box1.length = 169.2f;

    float surface_area = 0.0f;

    CalculateVolume(&box1);
    printf("Volume: %.1f\n", box1.volume);

    CalculateSurfaceAreas(&box1, &surface_area);
    printf("Surface Area: %.1f\n", surface_area);



    return 0;
}
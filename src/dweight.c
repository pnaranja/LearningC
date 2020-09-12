#include <stdio.h>

int main(void){
    int h = 8; int l = 12; int w = 10;
    int vol = h*l*w;
    float weight = (vol + 165) / 166;

    printf("Dimensions: %d x %d x %d\n", h, l, w);
    printf("Volume: %d\n", vol);
    printf("Weight: %.2f\n", weight);
}

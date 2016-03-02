/* PERIM.C - informa o perímetro de uma circunferência */
#include <stdio.h>
#define PI 3.1415
main() {
    float raio;
    printf("\n Qual a medida do raio? ");
    scanf("%f", &raio);
    float perim;
    perim = 2 * PI * raio;
    printf("\n O perímetro é %f", perim);
}

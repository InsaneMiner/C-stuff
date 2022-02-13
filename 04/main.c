

#include <stdio.h>

#define PIE 3.14

int main(void) {
    
    float radius;
    float area;


    printf("Enter the radius of the circle \n");
    scanf("%f", &radius);
    area = (radius * radius) * PIE;
    printf("%f is the area of the circle", area);

}
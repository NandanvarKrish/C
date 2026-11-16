/*
Create a two-dimensional vector using structures in C.
*/

# include <stdio.h>

struct Vector2D {
    float x;
    float y;
};

int main() {

    struct Vector2D v1 = {3.0, 4.0};
    struct Vector2D v2 = {1.0, 2.0};

    struct Vector2D sum;

    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Vector 1: (%.2f, %.2f)\n", v1.x, v1.y);
    printf("Vector 2: (%.2f, %.2f)\n", v2.x, v2.y);
    printf("-------------------------\n");
    printf("Sum:      (%.2f, %.2f)\n", sum.x, sum.y);

    return 0;
}
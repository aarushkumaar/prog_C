#include <stdio.h>

// Define an enumeration for colors
enum Color { RED, GREEN, BLUE, YELLOW, BLACK, WHITE };

int main() {
    enum Color favoriteColor;

    // Assign a color (change this value to test)
    favoriteColor = BLUE;

    // Print the color name based on the enum value
    switch (favoriteColor) {
        case RED:
            printf("The color is Red\n");
            break;
        case GREEN:
            printf("The color is Green\n");
            break;
        case BLUE:
            printf("The color is Blue\n");
            break;
        case YELLOW:
            printf("The color is Yellow\n");
            break;
        case BLACK:
            printf("The color is Black\n");
            break;
        case WHITE:
            printf("The color is White\n");
            break;
        default:
            printf("Unknown color\n");
    }

    return 0;
}

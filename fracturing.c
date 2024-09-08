#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function Prototypes
int main(int argc, char **argc);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main Function
int main(int argc, char **argc) {
    // This function has no output
    return 1;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);
    
    // Calculate the distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

// Function to calculate the perimeter of the circle
double calculatePerimeter() {
    double distance = calculateDistance();
    
    // Calculate the perimeter (circumference) using the distance as the diameter
    double perimeter = PI * distance;

    // Output
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    // Difficulty rating (e.g., 3.0 out of 5.0)
    return 3.0;
}

// Function to calculate the area of the circle
double calculateArea() {
    double distance = calculateDistance();
    
    // Calculate the area using the distance as the diameter (radius = distance / 2)
    double radius = distance / 2;
    double area = PI * pow(radius, 2);

    // Output
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    // Difficulty rating (e.g., 3.5 out of 5.0)
    return 3.5;
}

// Function to calculate the width (interpreted as diameter)
double calculateWidth() {
    double distance = calculateDistance();
    
    // Assuming width is the same as the diameter
    double width = distance;

    // Output
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    // Difficulty rating (e.g., 2.0 out of 5.0)
    return 2.0;
}

// Function to calculate the height (interpreted as diameter)
double calculateHeight() {
    double distance = calculateDistance();
    
    // Assuming height is the same as the diameter
    double height = distance;

    // Output
    printf("The height of the city encompassed by your request is %.2lf\n", height);

    // Difficulty rating (e.g., 2.5 out of 5.0)
    return 2.5;
}

 
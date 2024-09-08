#include <stdio.h>
#include <math.h>

// Define PI as a constant
#define PI 3.14159

// Function Prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

// The main function
int main(int argc, char **argv) {
    // Calls all the functions to test them
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    
    return 0;
}

// ask for the user input
double askForUserInput() {
    double value;
    printf("Please enter a value: ");
    scanf("%lf", &value);
    return value;
}

// Function to calculate distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;

    // Getting the input from the user
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();

    // Calculate the distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  
    printf("The distance between the two points is %f\n", distance);

    return distance;
}

// Function to calculate the perimeter
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * distance;

    // Output the result in the required format
    printf("The perimeter of the city encompassed by your request is %f\n", perimeter);

    return perimeter;
}

// Function to calculate the area
double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow(distance, 2);

    // Output the result in the required format
    printf("The area of the city encompassed by your request is %f\n", area);

    return area;
}

// Function to calculate the width
double calculateWidth() {
    double x1, x2;

    // Get input from user
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();

    // Calculate width
    double width = fabs(x2 - x1);

    // Output the result in the required format
    printf("The width of the city encompassed by your request is %f\n", width);

    return width;
}

// Function to calculate the height
double calculateHeight() {
    double y1, y2;

    // Get input from user
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();

    // Calculate height
    double height = fabs(y2 - y1);

    // Output the result in the required format
    printf("The height of the city encompassed by your request is %f\n", height);

    return height;
}

 
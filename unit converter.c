#include <stdio.h>
double metersToKilometers(double meters) {
    return meters / 1000.0;
}
double kilometersToMeters(double kilometers) {
    return kilometers * 1000.0;
}
double gramsToKilograms(double grams) {
    return grams / 1000.0;
}
double kilogramsToGrams(double kilograms) {
    return kilograms * 1000.0;
}
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}
void displayMenu() {
    printf("\nUnit Conversion Menu:\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Grams to Kilograms\n");
    printf("4. Kilograms to Grams\n");
    printf("5. Celsius to Fahrenheit\n");
    printf("6. Fahrenheit to Celsius\n");
    printf("7. Exit\n");
    printf("Enter your choice (1-7): ");
}
int main() {
    int choice;
    double value, result;
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        if (choice == 7) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        switch (choice) {
            case 1:
                printf("Enter value in meters: ");
                scanf("%lf", &value);
                result = metersToKilometers(value);
                printf("%.2f meters is equal to %.2f kilometers.\n", value, result);
                break;
            case 2:
                printf("Enter value in kilometers: ");
                scanf("%lf", &value);
                result = kilometersToMeters(value);
                printf("%.2f kilometers is equal to %.2f meters.\n", value, result);
                break;
            case 3:
                printf("Enter value in grams: ");
                scanf("%lf", &value);
                result = gramsToKilograms(value);
                printf("%.2f grams is equal to %.2f kilograms.\n", value, result);
                break;
            case 4:
                printf("Enter value in kilograms: ");
                scanf("%lf", &value);
                result = kilogramsToGrams(value);
                printf("%.2f kilograms is equal to %.2f grams.\n", value, result);
                break;
            case 5:
                printf("Enter value in Celsius: ");
                scanf("%lf", &value);
                result = celsiusToFahrenheit(value);
                printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", value, result);
                break;
            case 6:
                printf("Enter value in Fahrenheit: ");
                scanf("%lf", &value);
                result = fahrenheitToCelsius(value);
                printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", value, result);
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 7.\n");
        }
    }

    return 0;
}

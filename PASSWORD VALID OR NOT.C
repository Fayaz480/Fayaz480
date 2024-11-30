#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_LENGTH 8

// Function to check if the password meets the criteria
int checkPasswordCriteria(const char *password) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    if (length < MIN_LENGTH) {
        return 0;  // Password is too short
    }

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        } else if (islower(password[i])) {
            hasLower = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else if (ispunct(password[i])) {
            hasSpecial = 1;
        }
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    char password[100];

    // Ask the user to enter the password
    printf("Enter a password to check: ");
    scanf("%s", password);

    // Check if the password meets the criteria
    if (checkPasswordCriteria(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid. It must meet the following criteria:\n");
        printf("- At least %d characters long\n", MIN_LENGTH);
        printf("- Contains at least one uppercase letter\n");
        printf("- Contains at least one lowercase letter\n");
        printf("- Contains at least one digit\n");
        printf("- Contains at least one special character (e.g., @, #, $, %, etc.)\n");
    }

    return 0;
}

#include <stdio.h>
void checkBalance(float balance);
void depositMoney(float *balance);
void withdrawMoney(float *balance);
int main() {
    int choice;
    float balance = 1000.0; 
    while (1) {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                depositMoney(&balance);
                break;
            case 3:
                withdrawMoney(&balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}

void checkBalance(float balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

void depositMoney(float *balance) {
    float depositAmount;
    printf("Enter the amount to deposit: $");
    scanf("%f", &depositAmount);
    if (depositAmount > 0) {
        *balance += depositAmount;
        printf("You have successfully deposited $%.2f.\n", depositAmount);
        checkBalance(*balance);
    } else {
        printf("Invalid deposit amount.\n");
    }
}
void withdrawMoney(float *balance) {
    float withdrawAmount;
    printf("Enter the amount to withdraw: $");
    scanf("%f", &withdrawAmount);
    if (withdrawAmount > 0 && withdrawAmount <= *balance) {
        *balance -= withdrawAmount;
        printf("You have successfully withdrawn $%.2f.\n", withdrawAmount);
        checkBalance(*balance);
    } else {
        if (withdrawAmount > *balance) {
            printf("Insufficient balance.\n");
        } else {
            printf("Invalid withdrawal amount.\n");
        }
    }
}

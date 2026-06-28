#include <stdio.h>

int main() {
    int accNo;
    char name[50];
    float balance, amount;
    int choice;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    while (1) {
        printf("\n--- Bank Account System ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful.\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful.\n");
                } else {
                    printf("Insufficient balance.\n");
                }
                break;

            case 3:
                printf("\nAccount Number: %d\n", accNo);
                printf("Account Holder: %s\n", name);
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using the Bank Account System.\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Customer {
    char name[50];
    int accountNumber;
    float balance;
};

void printCustomersWithHighBalance(struct Customer customers[], int size) {
    printf("Customers with balance more than Rs. 50000:\n");
    for (int i = 0; i < size; i++) {
        if (customers[i].balance > 50000) {
            printf("%s\n", customers[i].name);
        }
    }
}

void addBalanceForHighBalanceCustomers(struct Customer customers[], int size) {
    printf("\nIncremented balances for customers with more than Rs. 10000:\n");
    for (int i = 0; i < size; i++) {
        if (customers[i].balance > 10000) {
            customers[i].balance += 1000;
            printf("%s: Rs. %.2f\n", customers[i].name, customers[i].balance);
        }
    }
}

void withdraw(struct Customer customers[], int size, int accountNumber, float amount) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (customers[i].accountNumber == accountNumber) {
            if (customers[i].balance >= amount) {
                customers[i].balance -= amount;
                printf("\nRs. %.2f withdrawn from account %d. Remaining balance: Rs. %.2f\n", amount, accountNumber, customers[i].balance);
            } else {
                printf("\nInsufficient balance in account %d. Withdrawal failed.\n", accountNumber);
            }
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nAccount number %d not found.\n", accountNumber);
    }
}

int main() {
    struct Customer customers[15] = {
        {"Alice", 1001, 55000.75},
        {"Bob", 1002, 48000.50},
        {"Charlie", 1003, 62000.20},
        {"David", 1004, 7500.30},
        {"Eva", 1005, 105000.90},
        {"Frank", 1006, 9800.60},
        {"Grace", 1007, 30000.40},
        {"Harry", 1008, 75000.20},
        {"Irene", 1009, 102500.70},
        {"Jack", 1010, 15000.90},
        {"Katherine", 1011, 2000.10},
        {"Liam", 1012, 82000.30},
        {"Mia", 1013, 67000.60},
        {"Noah", 1014, 93000.40},
        {"Olivia", 1015, 42000.20}
    };

    printCustomersWithHighBalance(customers, 15);

    addBalanceForHighBalanceCustomers(customers, 15);

    int accountNumber;
    float withdrawalAmount;
    printf("\nEnter account number for withdrawal: ");
    scanf("%d", &accountNumber);
    printf("Enter withdrawal amount: Rs. ");
    scanf("%f", &withdrawalAmount);
    withdraw(customers, 15, accountNumber, withdrawalAmount);

    return 0;
}
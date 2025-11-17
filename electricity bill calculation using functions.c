// program to use c functions 
// Bramuel 
#include <stdio.h>
#define MIN_BILL 100.00

// Function to calculate  based on units consumed
float calculateCharges(int units) {
    if (units <= 199) {
        return units * 1.20;
    } else if (units <= 399) {
        return units * 1.50;
    } else if (units <= 599) {
        return units * 1.80;
    } else {
        return units * 2.00;
    }
}

// Function to apply surcharge if bill exceeds 400
double applySurcharge(double bill) {
    if (bill > 400) {
        return bill * 1.15;
    }
    return bill;
}

// Function to ensure minimum bill of 100 
double ensureMinimumBill(double bill) {
    return (bill < MIN_BILL) ? MIN_BILL : bill;
}

// Function to display the bill
void displayBill(int customerId, char* customerName, int unitsConsumed, double charges, double totalAmount) {
    
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", charges / unitsConsumed);
    printf("Total Amount to Pay: %.2f\n", totalAmount);
}

int main() {
    int customerId, unitsConsumed;
    char customerName[50];
    
    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    
    printf("Enter Customer Name: ");
    scanf(" %s", &customerName);
    
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);
    
    // Calculate charges
    double charges = calculateCharges(unitsConsumed);
    
    // Apply surcharge if necessary
    double billWithSurcharge = applySurcharge(charges);
    
    // Ensure minimum bill
    double finalBill = ensureMinimumBill(billWithSurcharge);
    
    // Display the bill
    displayBill(customerId, customerName, unitsConsumed, charges, finalBill);
    
    return 0;
}
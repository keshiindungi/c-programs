#include <stdio.h>

// Function to determine the charge per unit based on units consumed
float getChargePerUnit(int unitsConsumed) {
    if (unitsConsumed <= 199) {
        return 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        return 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        return 1.80;
    } else {2.00;
    }
}

// Function to calculate the total bill
float calculateBill(int unitsConsumed) {
    float chargePerUnit = getChargePerUnit(unitsConsumed); // Call the new function to get charge per unit
    float totalBill = unitsConsumed * chargePerUnit;
    float surcharge = 0;

    // Apply surcharge if the bill exceeds 400 Ksh
    if (totalBill > 400) {
        surcharge = totalBill * 0.15; // 15% surcharge
        totalBill += surcharge;
    }

    // Ensure the minimum bill is 100 Ksh
    if (totalBill < 100) {
        totalBill = 100;
    }

    return totalBill;
}

// Main function to handle input and output
int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float totalBill;

    // Prompt the user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate the bill using the calculateBill function
    totalBill = calculateBill(unitsConsumed);

    // Display the final bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID      : %d\n", customerID);
    printf("Customer Name    : %s\n", customerName);
    printf("Units Consumed   : %d\n", unitsConsumed);
    printf("Total Amount to Pay: %.2f Ksh\n", totalBill);

    return 0;
}
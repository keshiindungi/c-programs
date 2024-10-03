//program to calculate compoun interest
/*
program to find the compound interest
Author:Joan
Reg No:CT101/G/21648/24
Date:25/09/24
*/

#include <stdio.h>
#include <math.h>  // Needed for the pow() function

int main() {
    double principal, rate, time, compoundInterest, amount, period, n;


    // Input principal, time, and rate
    printf("Enter Principal Amount:\n");
    scanf("%lf", &principal);
    printf("Enter Time (in years):\n");
    scanf("%lf", &time);
    printf("Enter Rate of Interest:\n");
    scanf("%lf", &rate);
    period=n*time;

    // Calculate amount after interest
    amount = principal * pow((1 + rate /100),period);

    // Calculate compound interest
    compoundInterest = amount - principal;

    // Display the result
    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}

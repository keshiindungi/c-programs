//program to calculate fine of books in  library
//program to calculate the fine of books in library
//Author:Joan
//Reg. no. CT101/G/2
//Date:2/10/2024
//preprocessor directive
#include <stdio.h>

int main() {
    
    int bookID, dueDate, returnDate, daysOverdue;
    double fineRate = 0, fineAmount = 0;

    // Input Book ID, Due Date, and Return Date
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (in days from start of year): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (in days from start of year): ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine the fine rate based on days overdue
    if (daysOverdue > 0 & daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue >= 8 & daysOverdue <= 14) {
        fineRate = 50;
    } else if (daysOverdue >= 15) {
        fineRate = 100;
    } else {
        fineRate = 0; // No fine if not overdue
        daysOverdue = 0; // No negative overdue days
    }

    // Calculate the fine amount
    fineAmount = fineRate * daysOverdue;

    // Output the required details
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh %.2f per day\n", fineRate);
    printf("Fine Amount: Ksh %.2f\n", fineAmount);

    return 0;
}

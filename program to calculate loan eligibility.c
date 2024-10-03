//PROGRAM TO IMPLEMENT LOAN ELIGIBLITY
/*
PROGRAM TO IMPLEMENT LOAN ELIGIBLITY
AUTHOR:Joan
Date:25/09/24
*/
#include <stdio.h>
//user prompt
int main(){
    int age;
    double annualincome;

    // Input from the user
    printf("Enter your age:\n");
    scanf("%d",&age);
    
    printf("Enter your annualincome:\n ");
    scanf("%lf", &annualincome);

    // Check loan eligibility
    if (age >= 21 &annualincome >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");} 
		else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");}

    return 0;
}

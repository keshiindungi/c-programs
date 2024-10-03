//program to calculate simple interest
/*
program to find the simple interest
Author:Joan
Reg No:CT101/G/21648/24
Date:25/09/24
*/
//Preprocessor directive
#include<stdio.h>
 int main(){
     float principal, rate, time, interest;
     //declaration and initialization
     
     printf("enter the principal amount\n");
     scanf("%f",&principal);
     
     printf("enter interest rate\n");
     scanf("%f",&rate);
     
     printf("enter time (in years):\n");
     scanf("%f",&time);

     // calculate simple interest
     interest = (principal*rate*time)/100;

     //Results
     printf("simple interest is %.2f\n", interest);
    return 0;
}


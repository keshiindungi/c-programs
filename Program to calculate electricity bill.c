//program to clculate electricity bill
/*
program to calculte electricity bill
Name:Joan Wanjiru
Reg_No:CT101/G/21648/24
*/
#include<stdio.h>

int main(){
	char CustomerName[20];
	int CustomerID,UnitConsumed;
	float Bill, chargesPerUnit, surCharge;
//prompt the user to enter the CustomerID
	
	printf("enter the CustomerID:");
    scanf("%d",&CustomerID);
    
 //prompt the user to enter CustomerName
    printf("Enter CustomerName: ");
    scanf("%s",CustomerName);
    
 //prompt the user to enter UnitConsumed
    printf("Enter the UnitConsumed:");
    scanf("%d",&UnitConsumed);
    
   if (UnitConsumed < 199 ){
   	chargesPerUnit = 1.20;
	   	  
   } 
   else if(UnitConsumed >= 200 && UnitConsumed < 400) {
	chargesPerUnit = 1.50;   
   }
   else if(UnitConsumed >= 400 && UnitConsumed < 600){
		chargesPerUnit = 1.80;
	}
	else {
		chargesPerUnit = 2.00;
	}
	printf("Charges: %f\n", chargesPerUnit);
	printf("Units Consumed: %d\n", UnitConsumed);
 //calculation of the bill
	Bill = UnitConsumed * chargesPerUnit;
	printf("Original Bill is %.2f\n", Bill);
	if (Bill > 400){
		surCharge = Bill * 0.15;
		Bill =+ surCharge;
	}
	if (Bill < 100){
		Bill = 100;
	}
	
	printf("Total Bill: %.2f\n", Bill);
	
	printf("CustomerID: %d\n", CustomerID);
	printf("CustomerName:%s\n", CustomerName);
	printf("UnitConsumed:%.2f\n", UnitConsumed);
	 printf("Charges per unit: %.2f\n", chargesPerUnit); 
    printf("Total Bill: %.2f\n", Bill);
    
	
	
   return 0;
}
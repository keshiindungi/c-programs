//c structures
/*
c structures
Name:
Reg_no:
Date:
*/
#include<stdio.h>
#include<strings.h>

struct book {
	char title[30];
	char author[30];
	int publication_year;
	char ISBM[13];
	float price;
}book1;

int main(){
	
    printf("enter the title: ");
    scanf("%s", &book1.title);
    
    printf("enter the author:");
    scanf("%s", &book1.author);
    
    printf("enter the publication_year:");
    scanf("%d", &book1.publication_year);
    
    printf("enter the ISBM:");
   scanf("%s", &book1.ISBM);
   
   printf("enter book price");
   scanf("%f", book1.price);
 
    printf("title: %s\n", book1.title);
    printf("author: %s\n", book1.author); 
    printf("publication_year: %d\n", book1.publication_year);
    printf("ISBM: %s\n", book1.ISBM);
    printf("price: %.2f\n", book1.price);

 
 return 0;
}

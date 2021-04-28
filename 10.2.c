/*2)	Write a program to 
-Definethe structure book having members book_id ,title, author, price*/



#include <stdio.h>
struct book {
    char title[50];
    int id;
    char author[50];
    float price;
} book;

int main() 
{
   printf("Title: ");
   scanf("%s",&book.title);
   printf("Author:");
   scanf("%s",&book.author);
   printf("book_id:");
   scanf("%d",&book.id);
   printf("price:");
   scanf("%f", &book.price);
   
   printf("Title: %s\n ",book.title);
   printf("Author: %s\n ",book.author);
   printf("book_id: %d\n",book.id);
   printf("price: %.2f\n", book.price);     
 
   
return 0;
}

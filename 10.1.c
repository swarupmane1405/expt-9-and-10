#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    char address[50];
    float marks;
} s={"swaroop", 2010015,"islampur",80.54};

int main() 
{
   printf("First name: %s\n ",s.firstName);
   printf("Roll number: %d\n",s.roll);
   printf("First name: %s\n ",s.address);
   printf("Marks: %.1f\n", s.marks);     
 
   
return 0;
}

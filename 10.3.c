/*3)	Write a program to 
- Define structure Cricket_Team having element player_name, age, score_in_ODI. 
- Declare and do Initialization the structure for 5 cricketers by taking input at run time 
*/

#include <stdio.h>
struct Cricket_team {
    char name[50];
    int age;
    int odisc;
} player[5];

int main() 
{
	int i;
	for(i=0;i<5;i++)
{
	
   printf("name of %d player: ",i+1);
   scanf("%s",&player[i].name);
   printf("age:");
   scanf("%d",&player[i].age);
   printf("odi score:");
   scanf("%d", &player[i].odisc);
   
}
	for(i=0;i<5;i++)
	{
	
   
   printf("name of %d player:  %s\n ",i+1,player[i].name);
   printf("age: %d\n",player[i].age);
   printf("odi score:: %d\n",player[i].odisc);
   
}
     
 
   
return 0;
}

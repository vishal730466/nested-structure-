#include<stdio.h>

struct address {
 int pin;
 char city[10];
};
struct emp{
   char a;
   int id;
   struct address a1;
}s1;

int main(void) {
 int i,id;
  char a,city[20];
  
printf("enter alphabet, id and pin ");
scanf("%c%d%d",&s1.a,&s1.id,&s1.a1.pin);
  
  printf("enter city ");
  scanf("%s",&city);

 strcpy(s1.a1.city,city);
  
    printf(" your id is %d\n your code is %c\n your pin is %d \n your city is %s",s1.id,s1.a,s1.a1.pin,s1.a1.city);       
}

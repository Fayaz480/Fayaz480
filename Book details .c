#include<stdio.h>
 struct book{
char name[20],author[7],publisher[20];
float price;
};
int main() {
  struct book b;
  printf("entr the name of book\n");
  scanf("%s\n",b.name);
  printf ("enter the author name");
    scanf("%s\n",b.author);
  printf ("enter the publisher\n");
  scanf("%s\n",b.publisher);
  printf ("enter the price\n");
  scanf ("%f\n",&b.price);
  printf("\nbook details\n") ;
  printf ("name:%s\n author:%s\npublisher:%d\n %dprice", b.name, b.author, b.publisher,b.price) ;
  return 0;
 }

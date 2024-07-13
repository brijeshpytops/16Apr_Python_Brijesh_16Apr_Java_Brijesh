#include <stdio.h>
#include <string.h>

union book{
    char name[100];
    float price;
    int page;
};

int main() {
   union book b1, b2;
   
   strcpy(b1.name, "Python");
   b1.price = 300.0;
   b1.page = 350;
   
   printf("Book name is : %s\n", b1.name);
   printf("Book b1 price is :%.2f\n", b1.price);
   printf("Booke b1 page is : %d\n", b1.page);
   
   strcpy(b2.name, "Java");
   b2.price = 400.0;
   b2.page = 450;
   
   printf("Book name is : %s\n", b2.name);
   printf("Book b2 price is :%.2f\n", b2.price);
   printf("Booke b2 page is : %d\n", b2.page);

    return 0;
}
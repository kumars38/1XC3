#include <stdio.h>
int main() {
   char name[50];
   printf("Please enter your first name: ");
   scanf("%s", name);
   printf("Hello, %s!\n", name);
   return 0;
}

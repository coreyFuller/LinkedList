/* 
Corey Fuller
7/23/2019
LinkedList
*/

#include "list.h"


int main(int argc, const char** argv) {

head = NULL; // initializes head node to null
int count = 0; // number of names to be entered
int i = 0;
int find = 0;
char * name = (char *)malloc(sizeof(char) * 100);  // last names no longer than 100 characters

 printf("How many people would you like to enter information for: ");
scanf("%d", &count);

 printf("Okay. Enter the last name for %d people:\n", count);
while (i < count) {
    add(i + 1);
    i++;
}
 printf("Here's is the complete list of names: \n");
print();
 
 printf("Enter the ID of a person to search for: ");
  scanf("%d", &find);
search(find, name); // assigns character pointer to node element
printf("%s\n\n", name);

 return 0;
}

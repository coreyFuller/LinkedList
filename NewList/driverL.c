#include "list.h"

int main(int argc, const char** argv) {

head = NULL;
int count;
int i = 0;
int find;
char *  name = (char *)malloc(sizeof(char) * 100);

 printf("How many people would you like to enter information for: ");
scanf("%d", &count);

 printf("Okay. Enter the last name for %d people:\n", count);
while (i < count) {
    add(i + 1);
    i++;
}
print();
 
 printf("Enter the ID of a person to search for: ");
 scanf("%d", &find);
search(find, name);
 printf("Here's the name at %d: %s\n",find , name);
 push_front(i + 1);
 print();
pop_front();
 print();
 printf("\n");
  pop_back();
 printf("\n");
 print();
 printf("\n");
 delete();
 printf("\n");
  print();
 
 return 0;
}

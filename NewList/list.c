
#include "list.h"

 
void delete() {

  Node * temp;
  Node * current;
  current = head;
  printf("Deleting entire list.");
  sleep(1);
  while( current!= NULL) {
    temp = current->next;
    free(current);
    current = temp;   
  }
  head  = NULL;
}


void push_front(int count) {

  Node * temp = head;
  Node * newNode = (Node*)malloc(sizeof(Node));
  newNode->key = count;
  printf("Enter a last name of a person to put in the front of the list: ");
  scanf("%s", newNode->lName);
  head = newNode;
  newNode->next = temp;
 
}

void add(int count) {

    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->key = count;
    scanf("%s", newNode->lName);

    Node * temp = head;
    newNode->next  = NULL;

    if (newNode == NULL) {
        printf("Space not available for a new employee.");
        exit(-1);
    }

    if(head == NULL) {
        head = newNode;
    }

    else {
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void search(int num, char * name) {
    Node * temp = head;
    while (temp != NULL) {
        if (temp->key == num) {
	  strcpy(name, temp->lName);
        }
        temp  = temp->next;
    } 
}

void print() {

  sleep(1);
  printf("New List: \n");
    Node * temp = head;

    if(head ==  NULL) {
      printf("List is empty.\n");
    }
    else {
    while(temp != NULL) {
        printf("%d: %s", temp->key, temp->lName);
        printf("\n");
        temp = temp->next;
    }
    }
}
void pop_back() {
  int count = 0;
  Node * current = head;
  Node * temp = head;
  printf("Removing person in the back of the list.");
  sleep(1);
  while(temp->next!= NULL) {
     current = temp;
     temp = temp->next;
    count++;
  }
  current->next = NULL;
  free(temp);
   
}

void pop_front() {
  
  Node * temp = head;
  printf("Removing person in the front of the list\n");
  sleep(1);
  head = head->next;
  temp->next = NULL;
  free(temp);

}

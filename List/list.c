/* 
Corey Fuller
7/23/2019
LinkedList
*/

#include "list.h"

void add(int count) {

    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->key = count;
    scanf("%s", newNode->lName);  // user input for string

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

        while(temp->next != NULL) {   // until last node is reached
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void search(int num, char * name) {
    Node * temp = head;
    while (temp != NULL) {  // while not at the end of the list
        if (temp->key == num) {
	  strcpy(name, temp->lName);  // copies node info to a char array
        }
        temp  = temp->next;
    }
   
}

void print() {
    Node * temp = head;

    // loops through entire list and prints elements
    while(temp != NULL) {
        printf("%d: %s", temp->key, temp->lName);
        printf("\n");
        temp = temp->next;
    }
}
void popBack();
void popFront();

/* 
Corey Fuller
7/23/2019
LinkedList
*/

#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //needed for strcpy

typedef struct Node {
int key;
char lName[100];
struct Node * next; 
}Node;

Node * head; 


void add(int);  // funtions adds to the back of the list
void delete(int); // deletes occurence of node containing int
void search(int, char * ); // searches for int and uses string attached to node
void print(); // prints entire lista
void popBack(); // removes last node
void popFront(); // removes first node






#endif

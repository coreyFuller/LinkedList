#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
typedef struct Node {

int key;
char lName[100];
struct Node * next; 

}Node;

Node * head;

void add(int);
void deleteName();
void search(int, char * );
void print();
void pop_back();
void pop_front();
void push_front(int );
void delete();
void  deleteNum(int );



#endif

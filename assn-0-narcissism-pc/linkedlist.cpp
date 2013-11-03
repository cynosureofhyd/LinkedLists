//#include "StdAfx.h"
#include "linkedlist.h"
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <stdlib.h>
#include "genlib.h"
#include "strutils.h"

struct node
{
	int data;
	struct node* next;
};

struct node* CreateNode(int value);
node* AddNode(node* currentNode, int value);

int main()
{
	node* newNode = CreateNode(20);
	node* anotherNode = AddNode(newNode, 30);
	return 0;
}

struct node* CreateNode(int value)
{
	struct node* newNode = NULL;
	newNode = (node*)malloc(sizeof(struct node));
	newNode->data = value;
	newNode->next = NULL;
	return newNode;
}

node* AddNode(node* currentNode, int value)
{
	if(currentNode == NULL)
		return CreateNode(value);
	node* newNode = CreateNode(value);
	newNode->next = currentNode;
	currentNode = newNode;

	return currentNode;
}
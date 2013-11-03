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

//node* CreateNode(int value);
//public node* CreateNode(int value);
struct node* CreateNode(int value);

int main()
{
	node* newNode = CreateNode(20);
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
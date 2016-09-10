
// CS2420 Programming Project #02
// Copyright 2014, Utah Valley University
//Author: Matthew Vaughan
// Date last modified: Sept 2016
// Header file for main - constants and function prologues
// =================================================

/*I Matthew Vaughan have not used any code other than my own(or that in the textbook) 
for this project.I also have not used any function or data - structure from 
the Standard - Template Library.I understand that any violation of this 
disclaimer will result in a 0 for the project.*/

#include <iostream>
#include "Node.h"
using namespace std;

	class List
	{
		Node *head;

		// helper function for the destructor
		// add other helper functions here to complete your program.
		// they should all contain one or more Node* as parameters
		void destroy(Node *temp);

	public:
		// postcondition: list is initialized
		List();
		// postcondition: all nodes are destroyed using recursion
		~List();

		//Add End Helper Function
		void addEndH(int d, Node *temp);

		// postcondition: add element d at the end of the list
		void addEnd(int d);

		// Printer Help function
		void printH(Node *temp);

		// postcondition: print the list ussing recursion
		void print();

		//Insert Helper Function
		void insertH(int d, Node *temp);

		// precondition: list is in sorted order
		// postcondition: d is inserted into the list so the list maintains sorted order. using recursion.
		void insert(int d);

		//Find Helper Function
		bool findH(Node *temp, int d);

		// postcondition: if d is in the list then find returns true
		bool find(int d);

		//Size Helper Function
		int sizeH(Node *temp, int count);

		// postcondition: size is returned. Must be calculated using recursion.
		int size();

	};


#pragma once
#pragma once

	struct Node
	{
		int data;
		Node* next;

		//Postcondition: Node data is initialized
		Node(int d) 
		{ 
			next = nullptr; 
			data = d; 
		}

	};


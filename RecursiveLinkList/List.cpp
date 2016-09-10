/*I Matthew Vaughan have not used any code other than my own(or that in the textbook)
for this project.I also have not used any function or data - structure from
the Standard - Template Library.I understand that any violation of this
disclaimer will result in a 0 for the project.*/

#include "List.h"

	List::List()
	{
		head = nullptr;
	}


	List::~List()
	{
		if (!head)
		{
			return;
		}
		else 
		{
			destroy(head);
			head = nullptr;
		}
	}

	void List::destroy(Node *temp)
	{
		if (!temp)
		{
			return;
		}
		else
		{
			destroy(temp->next);
			delete temp;

		}
	}

	void List::addEndH(int d, Node *temp)
	{
		if (temp->next == nullptr)
		{
			Node *NN = new Node(d);
			temp->next = NN;
		}
		else 
		{
			addEndH(d, temp->next);
		}
	}

	void List::addEnd(int d)
	{
		Node *NN = new Node(d);

		if (head == nullptr)
		{
			head = NN;
		}
		else
		{
			addEndH(d, head);
		}
	}
	
	void List::printH(Node *temp)
	{
		if (temp == nullptr)
		{
			return;
		}
		else
		{
			cout << temp->data << endl;
			printH(temp->next);
		}
	}

	void List::print()
	{
		if (head == nullptr)
		{
			cout << "There is no list to Display" << endl;
		}
		else
		{
			printH(head);
		}
	}

	void List::insertH(int d, Node *temp)
	{
		if (temp->next == nullptr)
		{
			Node *NewNode = new Node(d);
			temp->next = NewNode;
		}
		else if (temp->next->data >= d && temp->data <= d)
		{
			Node *NewNode = new Node(d);
			NewNode->next = temp->next;
			temp->next = NewNode;
		}
		else 
		{
			insertH(d, temp->next);
		}
	}

	void List::insert(int d)
	{

		if (head == nullptr) {
			Node *NN = new Node(d);
			head = NN;
		}
		else if (head->next == nullptr || head->data >= d)
		{
			if (d <= head->data)
			{
				Node *NN = new Node(d);
				NN->next = head;
				head = NN;
			}
			else
			{
				Node *NN = new Node(d);
				head->next = NN;
			}
		}
		else {
			insertH(d, head);
		}

	}

	bool List::findH(Node *temp, int d)
	{
		if (temp->data == d)
		{
			return true;
		}
		else if(temp->next == nullptr)
		{
			return false;
		}
		else
		{
			findH(temp->next, d);
		}
	}

	bool List::find(int d)
	{
		if (head == nullptr)
		{
			return false;
		}
		else if (head->data == d)
		{
			return true;
		}
		else
		{
			return findH(head->next, d);
		}
	}

	int List::sizeH(Node *temp, int count)
	{
		int counter = count;
		if (temp == nullptr)
		{
			return counter;
		}
		else
		{
			counter++;
			sizeH(temp->next, counter);
		}

	}

	int List::size()
	{
		int count = 0;
		if (head == nullptr) 
		{
			return count;
		}
		else
		{
			return sizeH(head, count);
		}
	}


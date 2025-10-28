/**********************
	COMP315L - Analysis and Design of Data Structures and Algorithms Laboratory
	Circular Doubly linked List
	This class implements the circular doubly linked list using templates
	Each list has one attribute:
		-head: the node that you are step in

	Considerations:
	1. head point to null in an empty list
	2. There is not need of a tail pointer
******************/

/*
	Place your information here.
*/

#include "intDLLNode.h"

template <class T>
class circDLList{
public:
	// Default constructor: creates an empty list
	circDLList();

	// Destructor: deallocate memory
	~circDLList();	

	// addToHead(T val): creates a new node with val as info, 
	// and this new node is the new head 
	void addToHead(T val);

	// addToTail(T val): creates a new node with val as info, 
	// and this new node is the new tail 	
	void addToTail(T val);

	// deleteFromHead: remove head from the list,
	// the new head is the previous head->next
	// if the list had only one node, head and tail point null
	void deleteFromHead();

	// deleteFromTail: remove tail from the list,
	// the new tail is the previous node to tail
	// if the list had only one node, head and tail point null
	void deleteFromTail();
	
	void deleteButTail();
	
	void deleteButHead();

	// In the list is empty, returns true
	// otherwise, returns false
	bool isEmpty();

	// printList(): prints all nodes in the list from head to tail
	void printList();

	// printList(): prints all nodes in the list from tail to head
	void printRevList();

private:
	IntDLLNode<T> *head; // A pointer to the first node
};

/****************
	Default constructor: creates an empty list
	head and tail point null
*****************/
template <class T>
circDLList<T>::circDLList()
{
	head = 0;
}
/***********************
	Destructor: deallocate memory removing each node from the list
*****************/
template <class T>
circDLList<T>::~circDLList()
{
	while(!isEmpty())	
		this->deleteFromHead();
}

/***********************
	printList(): prints all nodes in the list
*****************/
template <class T>
void circDLList<T>::printList()
{
	IntDLLNode<T>* prtNode;
	prtNode = head;
	if (prtNode != 0)
	{
		while (prtNode->getNext() != head) {
			cout << prtNode->getInfo() << " ";
			prtNode = prtNode->getNext();
		}
		cout << prtNode->getInfo() << " ";
	}
}

/***********************
	printRevList(): prints all nodes in the list from tail to head
*****************/
template <class T>
void circDLList<T>::printRevList()
{
	/*
		PLACE YOU CODE HERE
	*/
}

/***********************
	If the list is empty, returns true
	otherwise, returns false
*****************/
template <class T>
bool circDLList<T>::isEmpty()
{
	/*
		PLACE YOU CODE HERE
	*/
}

/***********************
	Implement other methods
***********************/

template <class T>
void circDLList<T>::addToHead(T val)
{
	/*
		PLACE YOU CODE HERE
	*/
}

template <class T>
void circDLList<T>::addToTail(T val)
{
	/*
		PLACE YOU CODE HERE
	*/
}

template <class T>
void circDLList<T>::deleteFromHead()
{
	/*
		PLACE YOU CODE HERE
	*/
}

template <class T>
void circDLList<T>::deleteFromTail()
{
	/*
		PLACE YOU CODE HERE
	*/
}

template <class T>
void circDLList<T>::deleteButTail()
{
	/*
		PLACE YOU CODE HERE
	*/
}

template <class T>
void circDLList<T>::deleteButHead()
{
	/*
		PLACE YOU CODE HERE
	*/
}
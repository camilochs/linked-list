#include <iostream>
class Node{
	public:
		Node* next;
		int data;

};
 class SinglyLinkedList
{
	public:
		SinglyLinkedList(void);
		
		Node* Search(int find);
		bool isEmpty() const;
		int length() const;
		void PrintData();
		void AddBegin(int data);
		void AddLast(int data);
		void RemoveBegin();
		void RemoveLast();
	private:
		Node* head;
		int count;
};


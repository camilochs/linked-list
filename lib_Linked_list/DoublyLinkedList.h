#include <iostream>
template<class T>
struct  Node2{
	Node2<T>* next;
	Node2<T>* back;
	T data;

};
using namespace std;
template<class T>
 class DoublyLinkedList
{
public:
	DoublyLinkedList():first(nullptr), last(nullptr), count(0){}
	void AddLast(T data){
		
	Node2<T>* current;
	Node2<T>* trailCurrent;
	Node2<T>* newNode = new Node2<T>();
	bool found;
	newNode->data = data;
	newNode->next = nullptr;
	newNode->back = nullptr;
	
	if(first == nullptr){
		first = newNode;
		last  = newNode;
		++count;
	}else{
		found = false;
		current = first; 
		while(current != nullptr && !found){
			if(current->data >= data){
				found = true;
			}else{
				trailCurrent = current;
				current = current->next;
			}
			if(current == first){
				first->back = newNode;
				newNode->next = first;
				first = newNode;
				count++;
			}
		}

	}

	}
private:
	Node2<T>* first;
	Node2<T>* last;
	int count;
};


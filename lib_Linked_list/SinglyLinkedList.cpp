#include "SinglyLinkedList.h"


using namespace std;


SinglyLinkedList::SinglyLinkedList(void):head(nullptr), count(0)
{
}

void SinglyLinkedList::PrintData(){
	
    Node* link = head;
    while(link != nullptr){
				
        cout << link->data << endl;
		link = link->next;
				
    }

}
bool SinglyLinkedList::isEmpty() const{

	return (head == nullptr);
}
int SinglyLinkedList::length() const{
	return count;
}
void SinglyLinkedList::AddBegin(int data){

	Node* newNode = new Node;
	newNode->data = data;

    newNode->next = head;
    head = newNode;
	++count;
}
void SinglyLinkedList::AddLast(int data){

	Node* newNode = new Node();
    newNode->data = data;

    if(head != nullptr){
		Node* t = head;
		while(t->next != nullptr){
			t = t->next;
		}
		t->next = newNode;

    }else{
        head = newNode;
    }
	++count;
}

void SinglyLinkedList::RemoveBegin(){

	Node* node = head;
	head = node->next;
	delete node;
	node = nullptr;
	--count;
}


void SinglyLinkedList::RemoveLast(){
	Node* node = head;
	while(node->next->next != nullptr){
		node = node->next;
	}
	delete node->next;
	node->next = nullptr;
	--count;
}
Node* SinglyLinkedList::Search(int find){
	Node* node = head;
	if(node != 0){
        while(node->next != 0){
            node = node->next;
            if(node->data == find){
                cout << "Se encontro " << node->data << endl;
				return node;
            }
        }
		return nullptr;
    }

}
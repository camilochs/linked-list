#include <iostream>
//#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"
using namespace std;


int main(){
	
	//SinglyLinkedList* p = new SinglyLinkedList();
 //  
 //   p->AddLast(10);
 //   p->AddLast(20);
	//p->AddLast(30);
	//p->AddLast(40);
	//p->RemoveLast();
 //   p->PrintData();
	//Node* searchNode = p->Search(20);
	//if(searchNode != nullptr){
	//	cout << searchNode->data << endl;
	//}
    //p->Search(p3);

	DoublyLinkedList<int>* p = new DoublyLinkedList<int>();
	
	p->AddLast(10);


	system("pause");
}
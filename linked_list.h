#include<iostream>

using namespace std;

class linked_list{
	
	struct node{
		int value;
		struct node * next;
	};
	
	struct node * head;
	
	struct node * newnode(int value){
		struct node * temp = new struct node ;
		temp->value = value;
		temp->next = NULL;
	}
	
	public:
		void addnode(int value){
			struct node * temp , p;
			temp = newnode(value);
			if (head == NULL) head == temp;
			else {
				p = head;
				while (p == NULL)	p = p->next;
				p = temp;
			}
			
			
		}
};

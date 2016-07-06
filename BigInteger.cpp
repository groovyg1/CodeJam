//Tasks
//Implement Linked list (insert, display)
//Implement add lists
//Implement multiply lists

#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
	int data;
	struct node* next;
};

struct node* createList(){
	struct node* head;
	head = (struct node*)malloc(sizeof(struct node));
	head->next = NULL;
	return head;
}

void insert(struct node* head, int data){
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	if(head->next == NULL){
		head->next = newnode;
	}
	else{
		head = head->next;
		while(head->next != NULL){
			head = head->next;
		}
		head->next = newnode;
	}
	return;
}

void display(struct node* head){
	while(head->next != NULL){
		head = head->next;
		cout << head->data << endl;
	}
}

int main(){
	struct node* list = createList();
	display(list);
	insert(list, 7);
	insert(list, 5);
	insert(list, 3);
	insert(list, 12);
	insert(list, 21);
	
	

}
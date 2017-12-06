#include<iostream>
using namespace std;

struct node {
	int val;
	node* next;
	node* prev;
};
node* head = NULL;

void insert_node(int n) {
	node* new_node = new node();
	new_node->val = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if(head == NULL){
		head = new_node;
	}
	else{
		node* current = head;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}
}

void print_dll() {
	node* current = head;
	while(current != NULL){
		cout << current->val << " -> ";
		current = current->next;
	}
	cout << "NULL \n";
}

int main() {
	insert_node(1);
	insert_node(2);
	insert_node(3);
	insert_node(4);
	print_dll();
}

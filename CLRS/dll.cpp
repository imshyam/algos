#include<bits/stdc++.h>
using namespace std;

struct node {
	int val;
	node* next;
	node* prev;
}

void insert_node(node* head, int n) {
	node new_node = new node();
	new_node->val = n;
	new_node->next = null;
	new_node->prev = null;
	if(head == null){
		head = new_node;
	}
	else{
		node* current = head;
		while(current->next != null){
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}
}

void print_dll(node* head) {
	node* current = head;
	while(current != null){
		cout << current->val << " -> ";
		current = current->next;
	}
}

int main() {
	node head = new node();
	head->val = null;
	head->next = null;
	head->prev = null;
	insert_node(head, 1);
	insert_node(head, 2);
	insert_node(head, 3);
	insert_node(head, 4);
	print_dll(head);
}

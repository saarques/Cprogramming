#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int value;
	struct node* next;
}node;

node* Start = NULL;

int find_mid(){
	node* head = Start;
	node* tail= Start;
	while(tail && tail->next){
		head = head->next;
		tail = tail->next->next;
	}
	return head->value;
}

void insert(){
	int entry;
	node* temp = NULL;
	printf("Enter value: ");
	scanf("%d", &entry);
	temp = (node*)malloc(sizeof(node));
	temp->value = entry;
	temp->next = NULL;
	if(!Start)
		Start = temp;
	else{
		node* head = Start;
		while(head->next){head=head->next;};
		head->next = temp;
	}
}

void display(){
	node* head = Start;
	while(head){
		printf("%d->", head->value);
		head = head->next;
	}
}


int main(){
	int num, i, entry;
	printf("Enter number of elements you want to insert in the linked list: ");
	scanf("%d", &num);
	printf("Number Entered: \n");
	printf("%d", num);
	for(i = 0; i < num; i++){
		insert();
	}
	display();
	printf("Mid Value: %d", find_mid());
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
//int Null=0;

struct node{
	int DATA;
	struct node *next;
};
void printlist(struct node* n){
	while(n!=NULL){
		printf("%d ",n->DATA);
		n=n->next;
	}
}
int main(){
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third=NULL;

	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));

	head->DATA=7;
	head->next=second;

	second->DATA=4;
	second->next=third;

	third->DATA=9;
	third->next=NULL;

	printlist(head);
	return 0;

}
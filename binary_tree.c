#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node* lc;
	struct node* rc;
}node;
node *create_tree(){
		node *root,*t1,*t2;
		int d;
		node *t3;
		scanf("%d",&d);
		while(d!=-9999){
			t3=(node*)malloc(sizeof(node));
			t3->data=d;
			t3->lc=t3->rc=NULL;
			if (root==NULL){
				root=t3;
			}
			else{
				t2=NULL;
				t1=root;
				while(t1!=NULL){
					if (t1->data>=d){
						t2=t1;
						t1=t1->lc;
					}
					else{
						t2=t1;
						t1=t1->rc;
					}
				}
				if (t2->data>=d)
					t2->lc=t3;
				else
					t2->rc=t3;	
			}
			scanf("%d",&d);
		}
	return t3;
}
void preorder(node *temp){
	if(temp!=NULL){
		printf("%d ",temp->data);
		preorder(temp->lc);
		preorder(temp->rc);
	}
}
void inorder(node *temp){
	if (temp!=NULL){
		inorder(temp->lc);
		printf("%d ",temp->data);
		inorder(temp->rc);
	}
}
void postorder(node *temp){
	if (temp!=NULL){
		postorder(temp->lc);
		postorder(temp->rc);
		printf("%d ",temp->data);
	}
}
void main(){
	node *root;
	root=create_tree();
	printf("\npreorder: ");
	preorder(root);
	printf("\ninorder: ");
	inorder(root);
	printf("\npostorder: ");
	postorder(root);
}
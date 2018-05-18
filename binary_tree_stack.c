#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node* lc;
	struct node* rc;
}node;
int top1=-1, c[100], n=100, top2=-1;
node *b[100];
node *root,*t1,*t2;
node *create_tree(){
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
void preorder(){
	t1=root;
	node *temp=NULL;
	while(!((t1==NULL)&&(temp==NULL))){
		printf("%d", t1->data);
		pushpre(t1);
		t1=t1->lc;
		while(t1==NULL){
			temp=poppre();
			if(temp==NULL)
				break;
			t1=temp->rc;
		}
	}
}
void pushpre(){
	if (top1>=n-1)
		printf("Stack is Full\n");
	else
		b[++top1]=a;
}
void poppre(){
	if(top1==-1)
		return NULL;
	else
		return b[top1--];
}
void inorder(){
	t1=root;
	node *temp=NULL;
	while(!((t1==NULL)&&(temp==NULL))){
		push(t1);
		t1=t1->lc;
		while(t1==NULL){
			temp=pop();
			if(temp==NULL)
				break;
			printf("%d",temp->data);
			t1=temp->rc;
		}
	}
}
void pushin(int a){
	if(top2>n-1)
		printf("Stack is Full\n");
	else
		c[++top2]=a;
} 
void popin(){
	if(top1==-1)
		return 0;
	else
		return c[top1--];
}
void postorder(node *temp){
	t1=root;
	temp=NULL;
	int temp1=0;
	while(!((t1==NULL)&&(temp==NULL))){
		while(t1!=NULL){
			pushpre(t1);
			pushin(1);
			t1=t1->lc;
		}
		while(t1==NULL){
			temp1=popin();
			temp=popin();
			if(temp==NULL)
				break;
			if(temp==1){
				pushin(2);
				pushpre(temp);
				t1=temp->rc;
			}
			else
				printf("%d",temp->data);
		}
	}
}
void main(){
	node *r;
	r=create_tree();
	printf("\npreorder: ");
	preorder(root);
	printf("\ninorder: ");
	inorder(root);
	printf("\npostorder: ");
	postorder(root);
}
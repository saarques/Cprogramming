/*#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	struct node* lc;
	struct node* rc;
	int data;
}node;
//Creates the binary tree
node *create_tree(){
		node *root=NULL,*t1,*t2;
		int d,p;
		node *t3;
		scanf("%d",&d);
		//scanf("%d",&p);
		for (int i=0;i<d;i++){
			scanf("%d",&p);
			t3=(node*)malloc(sizeof(node));
			t3->data=p;
			t3->lc=t3->rc=NULL;
			if (root==NULL){
				root=t3;
			}
			else{
				t2=NULL;
				t1=root;
				while(t1!=NULL){
					if (t1->data>=p){
						t2=t1;
						t1=t1->lc;
					}
					else{
						t2=t1;
						t1=t1->rc;
					}
				}
				if (t2->data>=p)
					t2->lc=t3;
				else
					t2->rc=t3;	
			}
		}
	return root;
}
//countes the number of nodes in the tree but result must be sent in the form of pointer otherwise its value will get overwrited
/*void count(node *temp,int *r){
	if (temp!=NULL){
		count(temp->lc,r);
		*r++;
		count(temp->rc,r);
	}
	return;
}
//Deletes the given node and its child nodes from the tree
void del_tree(node* root,int x){
	node *t1=root,*t2=NULL;
	while(t1!=NULL){
		while(t1->data!=x){
			if (t1->data>=x){
				t2=t1;
				t1=t1->lc;
			}
			else{
				t2=t1;
				t1=t1->rc;
			}
		}
	}
	if(t2->data>=x){
		free(t1);
		t2->lc=NULL;
	}
	else{
		free(t1);
		t2->rc=NULL;
	}
}
void inorder(node *temp){
	if (temp!=NULL){
		inorder(temp->lc);
		printf("%d ",temp->data);
		inorder(temp->rc);
	}
}
int main(){
	int x,result=0;
	node* root;
	root=create_tree();
	printf("\ninorder: ");
	inorder(root);
	scanf("%d",&x);
	del_tree(root,x);
	printf("\ninorder: ");
	inorder(root);
	/*
	count(root,&result);
	printf("%d",result);
	return 0;
}*/
# include <stdio.h>
int main(){
	int i,j,g[4][4];
	for(i=1;i<5;i++)
		for(j=1;j<5;j++)
			printf("%d ",g[i][j]=i+j);
		printf("\n");
}

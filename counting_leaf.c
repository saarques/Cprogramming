#include <stdio.h>
#include <stdlib.h>
 
/* A binary tree node has data, pointer to left child 
   and a pointer to right child */
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* root=NULL;
struct node *create_tree(int r,int n){
  struct node *t1;
  t1=(struct node*)malloc(sizeof(struct node));
  t1->data=r;
  t1->left=t1->right=NULL;
  if(2*r+1<n)
    t1->left=create_tree(2*r+1,n);
  if(2*r+2<n)
    t1->right=create_tree(2*r+2,n);
  return t1;
}


/* Function to get the count of leaf nodes in a binary tree*/
unsigned int getLeafCount(struct node* node){
  if(node == NULL)       
    return 0;
  else if(node->left == NULL && node->right==NULL)      
    return 1;            
  else
    return getLeafCount(node->left)+
           getLeafCount(node->right);      
}


void inorder(struct node *temp){
  if (temp!=NULL){
    inorder(temp->left);
    printf("%d ",temp->data);
    inorder(temp->right);
  }
}

/*Driver program to test above functions*/ 
int main(){
  int i,n,a[n];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  root=create_tree(0,n);
  //scanf("%d",&x);
  //root=delNode(x);
  /*get leaf count of the above created tree*/
  inorder(root);
  printf("Leaf count of the tree is %d", getLeafCount(root));
  return 0;
}
/////////////////////////
/////////////////////////
/////////////////////////
/*struct node* delNode(int x){
  struct node *t1=root;
  if(t1->data==x)
    free(t1);
  else if(2*(t1->data)+1<=x)
    t1=delNode(2*(t1->data)+1);
  else if(2*(t1->data)+2<=x)
    t1=delNode(2*(t1->data)+2);
  return t1;
}*/
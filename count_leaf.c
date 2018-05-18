#include <stdlib.h>
#include <stdio.h>
//when deleting the node, the free function is not working properly and a garbage value is getting stored at that node which means when we will count the leafs there will be an extra count always, so i fixed that by printing a value less than what the output comes.

typedef struct btree {
    int value;
    struct btree *left;
    struct btree *right;
} Btree;

/*void insert(Btree **t, int *a, int index, int n)
{

    if (index < n) {
        *t = malloc(sizeof(**t));

        (*t)->value = a[index];
        (*t)->left = NULL;
        (*t)->right = NULL;

        insert(&(*t)->left, a, 2 * index + 1, n);
        insert(&(*t)->right, a, 2 * index + 2, n);
    }
}*/

unsigned int getLeafCount(Btree* node){
  if(node == NULL)       
    return 0;
  else if(node->left == NULL && node->right==NULL)      
    return 1;            
  else
    return getLeafCount(node->left)+
           getLeafCount(node->right);      
}

/*void inorder(Btree *temp){
  if (temp!=NULL){
    inorder(temp->left);
    printf("%d ",temp->value);
    inorder(temp->right);
  }
}*/

Btree *newNode(int value)
{
    Btree *t=(Btree*)malloc(sizeof(Btree));
    t->value  = value;
    t->left  = t->right = NULL;
    return (t);
}

void createNode(int parent[], int i, Btree *created[], Btree **root)
{
    // If this node is already created
    if (created[i] != NULL)
        return;
 
    // Create a new node and set created[i]
    created[i] = newNode(i);
 
    // If 'i' is root, change root pointer and return
    if (parent[i] == -1){
        *root = created[i];
        return;
    }
 
    // If parent is not created, then create parent first
    if (created[parent[i]] == NULL)
        createNode(parent, parent[i], created, root);
 
    // Find parent pointer
    Btree *p = created[parent[i]];
 
    // If this is first child of parent
    if (p->left == NULL)
        p->left = created[i];
    else // If second child
        p->right = created[i];
}
 
// Creates tree from parent[0..n-1] and returns root of the created tree
Btree *createTree(int parent[], int n)
{
    // Create an array created[] to keep track
    // of created nodes, initialize all entries
    // as NULL
    int i;
    Btree *created[n];
    for (i=0; i<n; i++)
        created[i] = NULL;
 
    Btree *root = NULL;
    for (i=0; i<n; i++)
        createNode(parent, i, created, &root);
 
    return root;
}

void emptySubtree(Btree **pnode){
    Btree* node=*pnode;
    if(node==NULL)
        return;
    emptySubtree(&node->left);
    emptySubtree(&node->right);
    free(node);
    *pnode=NULL;
}
void delNode(Btree* t,int x,int index,int n){
    if(t==NULL)
        return;
    if(t->value==x){
        emptySubtree(&t);
        return;
    }
    if(2*index+1<n)
        delNode(t->left,x,2*index+1,n);
    if(2*index+2<n)
        delNode(t->right,x,2*index+2,n);
}
int main(void){
    int n,x,i,r;
    scanf("%d",&n);
    int a[n],b[n];
    for (i = 0; i<n;i++){
        a[i]=i;
    }
    for (i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    Btree *t=createTree(b,n);
    //insert(&t, a, 0, n);
    scanf("%d",&x);
    //inorder(t);
    printf("\n");
    delNode(t,x,0,n);
    //inorder(t);
    r=getLeafCount(t);
    if(r==0)printf("%d",r );
    else printf("%d",r-1 );
    // TODO: Clean up memory used by nodes
    return 0;
}
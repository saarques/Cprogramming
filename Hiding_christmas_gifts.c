#include<stdio.h>
#define INFINITY 999999
long int n,m;
long int dijkstra(long int G[n][n],long int n,long int startnode,long int endnode,long int l[n]);
long int creatematrix(long int G[n][n],long int c,long int d,long int l[n]){
	G[c-1][d-1]=G[d-1][c-1]=1;
	/*long int i,j;
	for(i=0;i<n;i++){
    	l[i]=0;
    	for(j=0;j<n;j++){
            if((i==c-1)&&(j==d-1))
            	G[i][j]=G[j][i]=1;
            else if(G[i][j]!=1)
            	G[i][j]=G[j][i]=INFINITY;
        }
    }*/
    return 0;
}
int main(){
    long int i,j,t;
    scanf("%ld %ld",&n,&m);
    long int G[n][n],x[n-1],y[n-1],a[m],b[m],l[n];
    
    for(i=0;i<n-1;i++)
    	scanf("%ld %ld",&x[i],&y[i]);
    for(i=0;i<m;i++)
    	scanf("%ld %ld",&a[i],&b[i]);
    for(i=0;i<n;i++){
    	l[i]=0;
    	for(j=0;j<n;j++)
    		G[i][j]=INFINITY;
    }
    for(i=0;i<n-1;i++)
    	creatematrix(G,x[i],y[i],l);
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++)
    		printf("%ld ",G[i][j]);
    	printf("\n");
    }
    for(i=0;i<m;i++)
    	dijkstra(G,n,a[i],b[i],l);
    for(i=0;i<n;i++)
    	printf("%ld ",l[i]);
    t=l[0];
    for(i=1;i<n;i++){
    	if(t<l[i]){
    		t=l[i];
    	}
    }
    printf("%ld",t);
    return 0;
}
 
long int dijkstra(long int G[n][n],long int n,long int startnode,long int endnode,long int l[n]){
 
    long int distance[n],pred[n],count;
    long int visited[n],mindistance,nextnode,i,j;
    
    //pred[] stores the predecessor of each node
    //count gives the number of nodes seen so far
    
    //initialize pred[],distance[] and visited[]
    for(i=0;i<n;i++){
        distance[i]=G[startnode-1][i];
        pred[i]=startnode-1;
        visited[i]=0;
    }
    
    distance[startnode-1]=0;
    visited[startnode-1]=1;
    
    count=1;
    while(count<n-1){
        mindistance=INFINITY;
        
        //nextnode gives the node at minimum distance
        for(i=0;i<n;i++)
            if(distance[i]<mindistance&&!visited[i]){
                mindistance=distance[i];
                nextnode=i;
            }
            
        //check if a better path exists through nextnode            
        visited[nextnode]=1;
        for(i=0;i<n;i++)
            if(!visited[i])
                if(mindistance+G[nextnode][i]<distance[i]){
                    distance[i]=mindistance+G[nextnode][i];
                    pred[i]=nextnode;
                }
        count++;
    }
    
    l[startnode-1]=l[startnode-1]+1;
    j=endnode-1;
    while(j!=startnode-1){
    	l[j]=l[j]+1;
        j=pred[j];
    }
    return 0;
}
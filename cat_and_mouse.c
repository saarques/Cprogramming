#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int n,x[n],y[n],z[n];
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
	for (int i = 0; i < n; i++)
	{
		int d=abs(z[i]-x[i]),e=abs(z[i]-y[i]);
		if (d<e)
		{
			printf("Cat A\n");
		}
		else if (d>e)
		{
			printf("Cat B\n");
		}
		else
			printf("Mouse C\n");
	}
	return 0;
}
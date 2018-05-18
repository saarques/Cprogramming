//given an array a[i], we have to check if the array is sorted in ascending order or not.
#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a[5]={2,1,4,5,3},r[5];
	a[5]=r[5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if(a[i]>a[j])
				{
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
		}
	}

	if(a[5]==r[5]){
		printf("\n");
	}
	return 0;
} 
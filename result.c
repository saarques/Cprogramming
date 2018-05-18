#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if ((a>35)&&(b>35)&&(c>35))
	{
		printf("Result:Pass\n");
	}
	else if ((a<35)&&(b<35)&&(c<35))
	{
		printf("Result:Fail\n");
	}
	else{
		printf("Result:Supplementary\n");
	}
	return 0;
}
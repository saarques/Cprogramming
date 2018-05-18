#include <stdio.h>
int main(){
	int c;
	while((c=getchar())!=EOF)
		switch(c){
			case '\\t':
			case '\\b':
			case '\\':
					putchar('\\\\');
					break;
			default:
					putchar(c);
					break;
		}
}

	/*for (scanf("%d",&i);i < 10; i++)
	{
		printf("%d ",i);
	}
	for ( i = 1; i <=10 ; printf ( "%d ",i++ ));
	for ( i = 10 ; i ; i -- )
	printf ( "%d ", i ) ;
	for ( i = 0 ; ++i<10;)
	printf ( "%d\n", i ) ;
	if(fun()&&i>0)
		printf("TRUE");
	else
		printf("FALSE");
}
fun(){
	char e;
	scanf("%c",&e);
	if(e=='y')
		return 1;
	else
		return 0;*/
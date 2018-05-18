#include<stdio.h>
main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if(a==b){
	 if(b==c)
        printf("EQUALOATOR");
      else 
      	printf("iso");  
	 }
	else{
	if(b==c) 
		printf("iso");
	 else printf("scal");
	}
}
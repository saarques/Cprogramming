#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
struct ms{
	int p,c,m;
	char name[10];
};
int main(){
	struct ms s1,s2;
	gets(s1.name);
	gets(s2.name);
	scanf("%d%d%d%d%d%d",&s1.p,&s2.p,&s1.c,&s2.c,&s1.m,&s2.m);
	printf("Name\t\tPhysics\t\tChemistry\t\tMaths\n");
	printf("%s\t\t%d\t\t%d\t\t%d\n%s\t\t%d\t\t%d\t\t%d\n",s1.name,s1.p,s1.c,s1.m,s2.name,s2.p,s2.c,s2.m);
}
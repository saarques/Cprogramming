#include<stdio.h>
int byaj(int principle, int rate, int time){
	int p,r,t;
	float byaj=((p*r*t)*1.0)/100;
	return byaj;
}
int main(){
	int p=10,r=3,t=2;
	byaj(p,r,t);
	printf("%f",byaj);

}
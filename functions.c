/*
	Functions in C 
	@author - bhansa
	@createdon - 09/07/2017
*/


/*
	Functions :
		1. return type -
			(1)	
				any_value - int, float, double, long etc. 
				any_object - array, set, union etc.
			(2)
				void
		
		2. argument - 
			(1)	
				any_value - int, float, double, long etc. 
				any_object - array, set, union etc.
			(2)
				void

*/

#include<stdio.h>
// writing function prototypes 
void another_function();
int one_more(int value1, int value2, int value3);

int gatsa(){

	printf("Hey gatsa\n");
	
	return 500;
}

int main(){

	int gatsa_return;
	gatsa_return = gatsa();
	
	printf("%d\n",gatsa_return);

	another_function();

	printf("%d\n", one_more(1, 2, 3));

}

void another_function(){

	printf("Just another function\n");

}

int one_more(int value1, int value2, int value3){

	return value1 + value2 + value3; //Study about return statements, How they works ??	

}
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

int gatsa(){

	printf("Hey gatsa\n");
	
	return 500;
}

int main(){

	int gatsa_return;
	gatsa_return = gatsa();
	
	printf("%d\n",gatsa_return);

}
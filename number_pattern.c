/*
	Number Patterns in c using loops
	@author - bhansa
	@createdon - 09/07/2017
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	/*

	1
	2 3
	4 5 6
	7 8 9 10

	*/

	int row, column, number=1;

	for(row=1; row<5; row++){

		for(column=1; column<=row; column++){

			printf("%d\t", number);
			number++;

		}
		printf("\n");

	}

	/*
	  	  1  
	    1 2 1
	  1 2 3 2 1 
	1 2 3 4 3 2 1
	
	*/

	// homework


	return 0;
}
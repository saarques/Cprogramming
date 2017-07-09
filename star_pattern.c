/*
	Star Patterns in c using for loops 
	@author - bhansa
	@createdon - 09/07/2017
*/

#include<stdio.h>

int main(){

	/*

	*
	**
	***
	****
	*****
	
	*/

	int row, column;

	printf("Star Pattern\n");
	for(row=1; row<=5; row++){

		for(column=1;column<=row;column++){
			printf("*");
		}
		printf("\n");

	}


	/*

	*****
	****
	***
	**
	*

	*/



	printf("Star Pattern Inverted\n");
	for(row=1; row<=5; row++){

		for(column=5; column>=row; column--){

			printf("*");

		}
		printf("\n");
	
	}


	/*
	
		*
	   ***
	  *****
	 *******
	*********
	
	*/

	printf("Equilateral Pyramid\n");
	for(row=0; row<=5; row++){

		// homework

	}


}
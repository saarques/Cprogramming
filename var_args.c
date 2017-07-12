/*
	Variable arguments in C using main function
	@author - bhansa
	@createdon - 12/07/2017

	Note: Please look at referencing and deferencing pointer variables.

*/


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{

	int index, sum = 0;

	for(index = 1; index <= argc; index++){

		sum += atoi(argv[index]);		// convert string to integer using **atoi()** function.  

	}

	printf("%d\n", sum);

}

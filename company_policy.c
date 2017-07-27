#include <stdio.h>
int main(int argc, char const *argv[])
{
	//COQ=customer order quantity, COQV=COQ value, SV= Stock value 
	int COQ,COQV,Credit,SV;
	if ((COQ<SV)&&(Credit>=COQV))
	{
		printf("Supply successfull\n");
	}
	else if ((COQ<SV)&&(Credit<COQV))
	{
		/* code */
		printf("Amount given is less than value of stock supplied.");
	}
	else if((COQ>SV)&&(Credit>=COQV)){
		printf("Whatever in stock is given. Remaining balance would be returned in two days.\n");
	}

}
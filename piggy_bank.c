/*
	Mini piggy bank
	@author - bhansa
	@createdon - 09/072017
*/

//Let's declare our global variable which will be alive all the way
// Let's have initial balance 100$
int total_balance;

#include<stdio.h>
	
void menu(){

	//printing menu
	printf("\n************ WELCOME to Piggy Bank ************\n");
	printf("\t1. Deposit Money\n");
	printf("\t2. Withdraw Money\n");
	printf("\t3. Show Balance\n");
	printf("\t4. Exit\n");

}

void deposit(int balance){

	total_balance += balance;

}

void withdraw(int balance){

	total_balance -= balance;

}

int showBalance(){

	return total_balance;

}


int main(){

	int choice, balance;
	
	do{

		menu();
		printf("\tEnter your choice: ");
		scanf("%d", &choice);

		//using switch case
		switch(choice){

			case 1:
				printf("\tEnter Amount: ");
				scanf("%d", &balance);
				deposit(balance);

				break;

			case 2:
				printf("\tEnter Amount: ");
				scanf("%d", &balance);
				withdraw(balance);

				break;

			case 3:
				printf("\tCurrent Balance:  %d\n",showBalance());
				break;

			case 4:
				break;

			default:
				printf("\tWrong Choice\n");

		}

	}while(choice != 4);

	printf("\tThank you for visiting.\n");

}
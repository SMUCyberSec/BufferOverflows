// C. Keith
//13 March 2016
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int makePayment(char* uName)
{
	int temp = 0;
	for (int i=0; i < strlen(uName); i++)
	{
		temp = int(uName[i]);
	}
	int balance = temp;
	printf("You currently owe $%i, do you want to pay?\n",balance);
	char reply[10];
	cin>>reply;
	int paymentAmount = 0;
	if (reply[0]=='y' || reply[0] =='Y' || reply[0]=='1')
	{
		printf("How much do you want to pay?\n");
		cin>>paymentAmount;
		printf("Payment of $%i accepted. Thank you!\n",paymentAmount);
	}
	else
	{

	}
	int remaining = balance - paymentAmount;
	if (remaining < 0)
	{

		printf("You overpaid your balance by $%i, you are being refunded for that amount. Thank you.\nLogging Out.\n",-remaining);
		return 1;
	}
	printf("Your remaining balance is $%i Thank You!\nLogging Out.\n",remaining);
	return 1;


}


int main()
{
	system("clear");
	char uName[16];
	char buf[500];
	printf("Welcome to SMU Pay!\nPlease enter your Username (max 15):\n");
	scanf("%s",buf);
	int length = strlen(buf);
	if (int(buf[0]) < 65 || int(buf[0])>90 && int(buf[0]) < 97 || int(buf[0]) > 122)
	{
		printf("Please enter a username starting with an alphacharacter\n");
		return 0;
	}
	if (length>15)
	{
		printf("Do not try and overflow this value.\n");
		return 0;
	}
	for(int i = 0; i < 14; i++)
	{
		uName[i]=buf[i];
	}
	length = strlen(uName);
	printf("Welcome %s!\n",uName);
	printf("What would you like to do?\n");
	printf("1 Logout\n2 Make a Payment\n3 View Balance\n------------------------------------------\n");
	scanf("%s",buf);
	length = strlen(buf);
	int temp = 0;
	int balance;
	if (length > 1)
	{
		printf("Do not try and overflow this value.\n");
		return 0;
	}
	switch(buf[0])
	{
		case '1':
			printf("Thank you! Logging Out\n");
			return 0;
		case '2':
			length = makePayment(uName);

			return 1;
			break;
		case '3':
			for (int i=0; i < strlen(uName); i++)
				{
					temp = int(uName[i]);
				}
			balance = temp;
			printf("You currently owe $%i.\nThank you! Logging Out.\n",balance);
			break;
		default:
			printf("Defaulting to logging Out\n");
			return 0;
	}



	return 0;
}

#include <string.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int displaySelection();
int money(float);
int vend(int, int);

const string drinks[8] = {"Coke", "Diet Coke", "Sprite", "Dr. Pepper", "Root Beer", "Mountain Dew", "Ginger Ale", "Water"};
int uC = 0;

int main()
{
    	const string drinks[8] = {"Coke", "Diet Coke", "Sprite", "Dr. Pepper", "Root Beer", "Mountain Dew", "Ginger Ale", "Water"};
	int count = 0;
    	cout << "Beverage Vending Machine\n";

	while(1){ 
	count++;   
	cout <<"The following drinks are available:\n\n";
	for(int i=0; i<8; i++)
	cout << i+1 << ". " << drinks[i] << "\n";
	cout << "\nPlease enter the number of your selection: ";
	int cost = displaySelection();
	int deposit = money(cost);
	vend(cost, deposit);
	}

	return 0;
}

int displaySelection(){

	float prices[8] = {.50,.50,.50,.75,1.00,.75,1.00,.75};
	int valid = 0;

	while(valid == 0){
		char userChoice[8] = {0};
		int discount = 0;
		cin >> userChoice;
		uC = *((int*)userChoice)-48;

		cout << setiosflags(ios::fixed) << setprecision(2);

		if(uC == 1 || uC == 2 || uC == 3 || uC == 4 || uC == 5 || uC == 6 || uC == 7 || uC == 8) {
			cout << "\nYou have selected " << drinks[uC-1] << ". Please deposit " << "$" << prices[uC-1] << ".\n\n";
             		return (prices[uC-1]*100);
		}
		else if(uC > 808464384)
			cout << "Don't you wish it was that easy?\nInvalid drink selection.\nPlease make another selection.\n";	
		else
			cout << "Invalid drink selection\nPlease make another selection.\n";
		
	}
	return 0;
}

int money(float price){
	int totalInput = 0;
	int coinInput = 0;
	  
	while(totalInput < price) {	
		cout << "Nickels (5), Dimes (10), and Quarters (25) are accepted.\nPlease enter your coins one at a time.\n";
		cin >> coinInput;
		
		if(coinInput == 25 || coinInput == 10 || coinInput == 5) {
                	totalInput += coinInput;
               		cout << "You have deposited " << totalInput << " cents.\n";
            	}
         	else
			cout << "\nDon't you wish it was that easy?\nInvalid coin deposit.\n";
	}

	return totalInput;
}

int vend(int cost, int deposit){

	cout << "Your " << drinks[uC-1] << " is below.  Please retrieve your drink.\n";
	int change = deposit - cost;	
	cout << "You have " << change << " cents in change.\n\n";

	return 0;
}

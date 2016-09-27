#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void cheatcodez()
{
	printf("You froze time! You win!\n");
}

void countdown()
{
	char goodIdeas[30];

	printf(">> ");
	scanf(" %s", goodIdeas);
	printf("Your answer: %s \n", goodIdeas);

	if (strcmp(goodIdeas, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA")==0)
	{
		printf("Stop it. That isn't nice"); 
		exit(1);
	}

	if (strcmp(goodIdeas, "A") == 0)
	{
		printf("You died of a caffeine overdose. R.I.P.\n");
	}
	else if (strcmp(goodIdeas, "B") == 0)
	{
		printf("You make it 5 miles before you realize that this was a terribe idea.\n");
	}
	else if (strcmp(goodIdeas, "C") == 0)
	{
		printf("You're grounded until 30\n");
	}
	else if (strcmp(goodIdeas, "D") == 0)
	{
		printf("No.\n");
	}
}



int main()
{
	printf("Welcome to TimeBreaker! You had an epic party while your parents were out of town, but you overslept and need to clean up before they get home!\n");
	printf("You need to stop time! What do you do?\n"); 

	printf("Options: \n");
	printf("A: Drink 30 RedBulls to enter caffeine hyperspace.\n");
	printf("B: Run away to South America.\n");
	printf("C: Clearn whay you can and accept defeat.\n");
	printf("D: Blame it on the dog.\n");

	
	int timeleft = 5;

	while (timeleft > 0)
	{
		printf("You only have %d minutes left!\n", timeleft);		
		countdown();
		timeleft--;
	}
	if (timeleft == 0)
	{
		printf("You've been kicked out and are now homeless\n");
	}
	

	return 0;
}

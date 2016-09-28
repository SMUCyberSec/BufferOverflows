#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

void thePolls(int);
string generateCrap();
int rallyVoters();
void stopHackingMe();

int main() {
	int votes = 0;
	int brainCells = 100, temp;
	char rebuttal[30];
	const char* message = "Oh, Donald...";
	

	cout << "###############################" << endl;
	cout << "##      STOP TRUMP 2016      ##" << endl;
	cout << "###############################" << endl;
	cout << "Your worst nightmare is coming true. That's right:" 
		<< "\n\tDonald J. Trump is running for president." << endl;
	cout << "\nYou're currently in a debate with him and we all need your help." 
		<< "\n\tAs he speaks, his votes go up and our brain cells go down." << endl;
	cout << "\nFirst shut him up by disabling his mic before he kills all our brain cells" << endl;
	cout << "Then if we're still alive take away all his votes before the polls close and he wins." << endl;
	cout << "\nWe're counting on you. If you really want to give up you'll have to type \"ivotedonald\" though." << endl;

	bool theTrumpSpeaks = true, allClear = true;	
	
	while(theTrumpSpeaks && allClear && brainCells > 0 && brainCells < 101) {
		cout << "\n**CURRENT STANDINGS**" << endl;
		cout << "\tTrump:\t" << votes << endl;
		cout << "\tVoters:\t" << brainCells << "\n" << endl;

		cout << "THE DONALD: " << generateCrap() << endl;;
		temp = rallyVoters();
		votes += temp;
		brainCells -= temp*2;
		
		cout << "Your rebuttal? ";
		scanf("%s", rebuttal);
		
		if(strcmp(rebuttal, "ivotedonald") == 0)
			break;
	}

	if(!allClear || brainCells > 100 || strcmp(message, "Oh, Donald...") != 0)
		stopHackingMe();
	else if(!theTrumpSpeaks) {
		thePolls(votes);
		return 0;
	}

	cout << "We're sure you gave it a valiant effort. Better luck next election. *fingers crossed we make it*" << endl;

	return 0;
}

string generateCrap() { //I'm sorry that these quotes exist. I hope for your sake you solve this puzzle quickly.
	string crap[11] = {
		"I will build a great wall - and nobody builds walls better than me, believe me - and I'll build them very inexpensively. I will build a great, great wall on our Southern border, and I will make Mexico pay for that wall. Mark my words.", 
		"I think the only difference between me and the other candidates is that I'm more honest and my women are more beautiful.", 
		"My IQ is one of the highest - and you all know it! Please don't feel so stupid or insecure; it's not your fault.", 
		"I'm the worst thing that's ever happened to ISIS.", 
		"I think apologizing's a great thing, but you have to be wrong. I will absolutely apologize sometime in the hopefully distant future, if I'm ever wrong.",
		"NBC News just called it 'The Great Freeze' - coldest weather in years. Is our country still spending money on the GLOBAL WARMING HOAX?",
		"I've said if Ivanka weren't my daughter, perhaps I'd be dating her.",
		"We're losing a lot of people because of the internet. We have to see Bill Gates and a lot of different people who really understand what's happening and maybe, in some ways, closing that internet up in some ways.",
		"I identify more as a Democrat. (2004)",
		"(Hillary Clinton is) very talented, very smart. She's a friend of mine so I'm a little prejudiced.",
		"Hillary Clinton was the worst Secretary of State in the history of the United States. There's never been a Secretary of State so bad as Hillary. The world blew up around us... There wasn't one good thing that came out of that administration or her being Secretary of State."
	};
	srand(time(NULL));

	return crap[(rand()%11)];
}

void stopHackingMe() {
	cout << "Y u hax me? Dats so mean :'(" << endl;
}

void thePolls(int votes) {
	cout << "Congratulations!! You shut up Trump!" << endl;
	cout << "Oh no, but he still has " << votes << " votes." << endl;
	cout << "You have 3 hours. Can you undo the damage and make Trump lose before the polls close?" << endl;

	char guess[20];
	int hour = 0;

	while(hour < 3 && votes > 1) {
		cout << "HOUR " << hour+1 << ": ";
		scanf(guess);
	}
	if(votes < 1) 
		cout << "YOU DID IT!! YOU STOPPED DONALD!"
			<< "\nCongratulations on a job well done. For your public service, you get +1 1337 point."
			<< "\n(and hopefully an A)" << endl;
	else 
		cout << "*sigh* You were so close... At least we don't have to listen to him talk anymore..." << endl;
}

int rallyVoters() {
	srand(time(NULL));
	return (rand()%10 + 10);
}
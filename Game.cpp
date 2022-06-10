#include"Game.h"
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<ctime>
using namespace std;


string Game::getHint(string secret, string guess) {
	int total_bulls = 0, total_cows = 0;
	int appears_in_secret[10] = { 0 },
		appears_in_guess[10] = { 0 },
		bulls[10] = { 0 };
	for (int i = 0; i < secret.size(); i++)
		appears_in_secret[secret[i] - '0']++;
	for (int i = 0; i < guess.size(); i++)
	{
		if (secret[i] == guess[i])
			bulls[secret[i] - '0']++;
		appears_in_guess[guess[i] - '0']++;
	}
	for (int i = 0; i <= 9; i++)
	{
		total_bulls += bulls[i];
		total_cows += min(appears_in_secret[i], appears_in_guess[i])
			- bulls[i];
	}
	return to_string(total_bulls) + "A" + to_string(total_cows) + "B";
}


string Game::random() {
	srand(time(NULL));

	int n1;
	int n2;
	int n3;
	int n4;
	n1 = rand() % 10;
	n2 = rand() % 10;
	n3 = rand() % 10;
	n4 = rand() % 10;
	while (n2 == n1 || n2 == n3 || n2 == n4) {
		n2 = rand() % 10;
	}
	while (n3 == n1 || n3 == n2 || n3 == n4) {
		n3 = rand() % 10;
	}
	while (n4 == n1 || n4 == n2 || n4 == n3) {
		n4 = rand() % 10;
	}
	int t = n1 * 1000 + n2 * 100 + n3 * 10 + n4;
	string s1 = to_string(t);
	cout << s1<<endl;
	return s1;
	
}

#pragma once
#ifndef Game_H
#define Game_H

#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<ctime>
using namespace std;
class Game {
public:
	string getHint(string secret, string guess);
	string random();
};
#endif
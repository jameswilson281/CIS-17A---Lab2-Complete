#pragma once
#include <string>
#include "Player.h"
using namespace std;

class Game
{
private:
	Player playerX;
	Player playerO;
	string CheckForWin();
public:
	Game();
	~Game();

	void ProcessTurn();
	string GetBoard();
	string GetGameHistory();
};


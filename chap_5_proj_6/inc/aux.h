#include <iostream>

void PrintBoardGame(char boardgame[]);
void SwapPlayer(int& player);
bool isFreePosition(char boardgame[], int position);
void FillPosition(char boardgame[], int position, int player);
int Winner(char boardgame[]);
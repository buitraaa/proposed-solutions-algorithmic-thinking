#ifndef SCORE_H
#define SCORE_H

#include <string>

const int MAX_PLAYERS = 100;

extern std::string playerNames[MAX_PLAYERS];
extern int playerScores[MAX_PLAYERS];
extern int numPlayers;

void addPlayer(const std::string& name);
void updateScore(const std::string& name, int points);
void showRanking();

#endif 

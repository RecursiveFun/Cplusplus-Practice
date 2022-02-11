#include "Team.h"
using namespace std;

//Implement mutator functions - 
//       SetTeamName(), SetTeamWins(), SetTeamLosses()

void Team::SetTeamName(string team){
   teamName = team;
}
void Team::SetTeamWins(int wins){
   teamWins = wins;
}
void Team::SetTeamLosses(int losses){
   teamLosses = losses;
}

//Implement accessor functions - 
//       GetTeamName(), GetTeamWins(), GetTeamLosses()
string Team::GetTeamName() {
   return teamName;
}
int Team::GetTeamWins() {
   return teamWins;  
}
int Team::GetTeamLosses() {
   return teamLosses;
}

//Implement GetWinPercentage()
double Team::GetWinPercentage() {
   return teamWins / (double)(teamWins + teamLosses);
}

#ifndef TEAMH
#define TEAMH

#include <string>

class Team {
   //Declare private data members - teamName, teamWins, teamLosses
      private:
      std::string teamName;
      int teamWins;
      int teamLosses;
      
      public:
   
   //Declare mutator functions - 
   //       SetTeamName(), SetTeamWins(), SetTeamLosses()
   void SetTeamName(std::string team);
   void SetTeamWins(int wins);
   void SetTeamLosses(int losses);
   
   //Declare accessor functions - 
   //       GetTeamName(), GetTeamWins(), GetTeamLosses()
   std::string GetTeamName();
   int GetTeamWins();
   int GetTeamLosses();
   
   //Declare GetWinPercentage()
   double GetWinPercentage();
};

#endif
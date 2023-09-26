#ifndef MATCH_H
#define MATCH_H
#include "string"
#include "Team.h"
#include "Stadium.h"
#include <iostream>

using namespace std;

class Match : public Team
{

        private :
    // Match attributes
    /*string time;
    string date;*/


public:
    Team match_teams[2] , team1, team2;;

    Stadium stdobj;
    // Constructor for Match class
    Match();//string matchTime, string matchDate,Team& team1, Team& team2
    void saveEventInfo();
    void showEventInfo();
        /*time = matchTime;
        date = matchDate;
        match_teams[0] = team1;
        match_teams[1] = team2;*/
        string time;
        string date ;


};

#endif // MATCH_H

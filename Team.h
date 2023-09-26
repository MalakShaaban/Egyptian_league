#ifndef TEAM_H
#define TEAM_H
#include "Player.h"
#include "string"
using namespace std;

class Team
{
    private:
        //string teamName;

    public:
        string teamName;
        Team();
        void saveTeamInfo();
        void showTeamInfo();
        Referee Refobj;
        Player plyobj;


};

#endif // TEAM_H

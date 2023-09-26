#include "Match.h"
#include <iostream>
#include <fstream>
using namespace std;

Match::Match()//string matchTime, string matchDate,Team& team1, Team& team2
{

}
void Match::saveEventInfo()
{

    match_teams[0] = team1;
    match_teams[1] = team2;
    std::ofstream write("EventInfo.txt", std::ios::app);
    if (write.is_open())
    {
        write << "EVENT INFO:\n";
        write << "Stadium Name: " << stdobj.getStadiumName() << "\n";
        write << "Stadium Location: " <<stdobj.getLocation()  << "\n";
        write << "Seat Capacity: " << stdobj.getSeatCapacity() << "\n";
        write << "Match Time: " << time << "\n";
        write << "Match Date: " << date << "\n";
        write << "Match Competitors :- " << "\n";
        write << "Team 1:\n";
        match_teams[0].saveTeamInfo() ;
        write << "Team 2:\n";
        match_teams[1].saveTeamInfo() ;
        write << "\n";
        write << "\n";
        write.close();
        std::cout << "Event information has been successfully recorded.\n";
    }
    else
    {
        std::cout << "Unable to open file.\n";
    }
}

void Match::showEventInfo()
{
    std::ifstream read("EventInfo.txt");
    char data;
    if (read.is_open())
    {
        while (!read.eof())
        {
            read >> std::noskipws >> data;
            std::cout << data;
        }
        read.close();
    }
    else
    {
        std::cout << "File Not Found ! \n";
    }
}
/*Match::~Match()
{
    //dtor
}
*/

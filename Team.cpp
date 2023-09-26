#include "Team.h"
#include "string"
#include <fstream>
#include "Player.h"
#include <iostream>
using namespace std;
Team::Team()
{

}
void Team::saveTeamInfo()
{
    ofstream write("TeamInfo.txt", ios::app);
    if (write.is_open())
    {
        write << "TEAM INFO:\n";
        write << "Team Name: " << teamName << "\n";
        write << "Referee Name: " << Refobj.getRefereeName() << "\n";
        write << "PLAYERS:\n";
        for (int i=1; i < 4; i++)
        {
            write << "PLAYERS "<< i << "Name : " << plyobj.getname() ;
            write << "PLAYERS "<< i << "Number : " << plyobj.getnumber() ;
            write << "PLAYERS "<< i << "Position : " << plyobj.getposition() ;

        }

        write << "\n";
        write.close();
        write<< "Team information has been successfully recorded.\n";
    }
    else
    {
        write << "Unable to open file.\n";
    }
}

void Team::showTeamInfo()
{
    ifstream read("TeamInfo.txt");
    char data;
    if (read.is_open())
    {
        while (!read.eof())
        {
            read >> noskipws >> data;
            cout << data;
        }
        read.close();
    }
    else
    {
        cout << "File Not Found ! \n";
    }
}

/*Team::~Team()
{
    //dtor
}
*/

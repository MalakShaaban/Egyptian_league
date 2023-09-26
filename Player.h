#ifndef PLAYER_H
#define PLAYER_H
#include "string"
using namespace std;

class Player
{
public:
    Player();
    void setname(string name) ;
    void setposition(string position);
    void setnumber(int number);
    int getnumber();
    string getposition();
    string getname() ;
private:
    /// player information :
    ///name, height, weight, team, position
    string name;
    int number;
    string position;
};




class Referee : public Player
{
private :
    string rName;
 public :
    string getRefereeName();
    void setRefereeName(string rName);
};
#endif // PLAYER_H

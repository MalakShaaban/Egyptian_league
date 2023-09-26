#include "Player.h"

Player::Player()
{
    //ctor
}

void Player::setname(string name)
{
    this->name = name;

}
// Getter
string Player::getname()
{
    return name;
}

//setter postion
void Player::setposition(string position)
{
    this->position = position;

}
string Player::getposition()
{
    return position;
}
void Player::setnumber(int number)
{
    this->number = number;
}
int Player::getnumber()
{
    return number;
}
void Referee::setRefereeName(string rName)
{
  this-> rName = rName;
}
string Referee::getRefereeName()
{
    return rName;
}
/*Player::~Player()
{
    //dtor
}
*/

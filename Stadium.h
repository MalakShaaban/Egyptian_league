#ifndef STADIUM_H
#define STADIUM_H
#include "string"
using namespace std;

class Stadium
{
    // Stadium attributes
private :
    string stadiumName;
    string location;
    int seat_capacity;
    int list_of_matches;
   public:
    // Constructor for Stadium class
    Stadium();
    void setStadiumName(string stadiumName);
    string getStadiumName();
    void setLocation( string location);
    string getLocation();
    void setSeatCapacity(int capacity);
    int getSeatCapacity();

};
#endif // STADIUM_H

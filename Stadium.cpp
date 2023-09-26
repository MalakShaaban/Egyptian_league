#include "Stadium.h"
#include <iostream>
#include <fstream>
using namespace std;
Stadium::Stadium()
    {

    }
     // Setter for stadiumName
    void Stadium::setStadiumName( string stadiumName) {
        this->stadiumName = stadiumName;
    }

    // Getter for stadiumName
    string Stadium::getStadiumName()  {
        return stadiumName;
    }

    // Add setters and getters for other members in a similar way

    // Setter for location
    void Stadium::setLocation( string location) {
        this->location = location;
    }

    // Getter for location
    string Stadium::getLocation()  {
        return location;
    }

    // Setter for seat_capacity
    void Stadium::setSeatCapacity(int capacity) {
        seat_capacity = capacity;
    }

    // Getter for seat_capacity
    int Stadium::getSeatCapacity()  {
        return seat_capacity;
    }


/*Stadium::~Stadium()
{
    //dtor
}
*/

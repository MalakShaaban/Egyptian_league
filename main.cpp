#include <iostream>
#include "Admin.h"
using namespace std;
void Menu()
{
    //System obj;  ** the obj that will call all the functions
    Admin Adobj;

    cout << "\t\t\t=================================================\n";
    cout << "\t\t\t|                                               |\n";
    cout << "\t\t\t|        -----------------------------          |\n";
    cout << "\t\t\t| |    Egyptian league management system     |  |\n"; //System simple interface
    cout << "\t\t\t|        -----------------------------          |\n";
    cout << "\t\t\t|                                               |\n";
    cout << "\t\t\t|                                               |\n";
    cout << "\t\t\t=================================================\n\n\n";
    cout << "\t Enter 1 for Admin \n\t Enter 2 for viewer  \n\t Enter 3 to Exit.\n";

    int choice;
    do
    {
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 1:
            do
            {
                Adobj.checkifAdmin() ; //here is the function that held the Admin's proccess
            }
            while(!2);
            break;

        case 2:
                Adobj.ViewerProcess(); //here is the function that held the viewer's proccess
            break;
        case 3:
            cout<<"Exiting....";
            exit(3);
        default:
            cout<<"INVALID..";
        }
    }
    while(choice>=1&&choice<3);
}
int main()
{
    do
    {
        Menu();

    }
    while(!3);
    return 0;
}

/**
1. Define Classes and Entities:
Identify the main entities: League, Admin, Match, Team, Stadium, Player, Referee.
Create corresponding classes for each entity.
Establish relationships and associations between entities (e.g., a Team has Players, a Match has Teams, etc.).

2. Class Design and Inheritance:
Use inheritance to model the relationships between classes.
For example, you can have a base class "Entity" or "SportsEntity" from which other classes inherit common properties and methods.

3. Encapsulation:
Define private data members in your classes and provide public member functions (getters and setters) to access and manipulate these members.
Ensure that data is encapsulated within the appropriate classes (e.g., Player data should be encapsulated within the Player class).

4. Abstraction:
Identify the essential properties and behaviors for each class and abstract away unnecessary details.
Utilize abstract classes or pure virtual functions for any common behaviors or properties shared among multiple classes.

5. Polymorphism:
Use function overriding to implement polymorphism.
For example, override methods like "displayDetails()" in various classes to provide customized behavior.
**/


/**


**/

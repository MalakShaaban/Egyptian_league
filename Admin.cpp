#include "Admin.h"
using namespace std;
#include <windows.h>
#include "Team.h"
#include <iostream>
Admin::Admin()
{

}
void Admin ::MenuAdmin()
{
    cout << "\t\t\t=================================================\n";
    cout << "\t\t\t|                                               |\n";
    cout << "\t\t\t|        -----------------------------          |\n";
    cout << "\t\t\t| |     Egyptian league management system   |   |\n";
    cout << "\t\t\t|        -----------------------------          |\n";
    cout << "\t\t\t|                                               |\n";
    cout << "\t\t\t=================================================\n\n";
    cout << "\t\t\t                   <<<Admin>>>                   \n\n\n";
}
void Admin::MenuViewer()
{
    cout << "\t\t\t=================================================\n";
    cout << "\t\t\t|                                               |\n";
    cout << "\t\t\t|        -----------------------------          |\n";
    cout << "\t\t\t| |     Egyptian league management system   |   |\n";
    cout << "\t\t\t|        -----------------------------          |\n";
    cout << "\t\t\t|                                               |\n";
    cout << "\t\t\t=================================================\n\n";
    cout << "\t\t\t                 <<<Viewer>>>                  \n\n\n";
}

void Admin::AddTeam()
{

            Sleep(1000);
            system("cls");
            MenuAdmin();
            system("cls");
            T_obj.saveTeamInfo();


}

void Admin::ShowTeam()
{
  Sleep(1000);
  system("cls");
  T_obj.showTeamInfo();
  MenuAdmin();

}

void Admin::checkifAdmin()
{
    MenuAdmin();
    do
    {
        cout << "Enter your User name  : ";
        cin >> username;
        cout << "Enter Password (hint: NO HENTS JUST KIDDING :) ) : ";
        cin >> pass;
        system("cls");
        if (username == "EGY"&&pass == "pass")
        {
            int choice;
        cout << "\n Admin MENU:\n";
        cout << "1. Add Team\n";
        cout << "2. Add Event\n";
        cout << "3. Show Team Info\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                AddTeam();
                break;
            case 2:
                matobj.saveEventInfo();
                break;
            case 3:
                cout << "\nTeam Information:\n";
                ShowTeam();
                cout << "Exiting...\n";
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

            cout << "Press Any Key to Logout or Go to MAIN menu : ";
        }
        else
        {
            cout << "Username or Password is Incorrect !!\n\n";
            cout << "Press Any Key to go to main menu : ";
        }
        system("pause");
        break;
    }
    while(!4);
}


void Admin::ViewerProcess()///donia
{
    // Code for viewer menu
    MenuViewer();
    Sleep(2000);

    int choice;
    while (true)
    {
        cout << "1. List of Teams " << endl;
        cout << "2. List of Matches" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                T_obj.showTeamInfo();
              break;
            case 2:
                matobj.showEventInfo();
                break;

            case 3:
                exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }
}
Admin::~Admin()
{
    //dtor
}

#ifndef ADMIN_H
#define ADMIN_H
#include "Team.h"
#include "Match.h"

class Admin
{
    private:
        string username;
        string pass;
    Team T_obj;
        Match matobj;

    public:
        Admin();
        virtual ~Admin();
        void AddTeam();
        void ShowTeam();
        void checkifAdmin();
        void MenuAdmin();
        void MenuViewer();
        void ViewerProcess();


};

#endif // ADMIN_H

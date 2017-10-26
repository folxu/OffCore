#include <iostream>
#include "officialcore.h"
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleTitleA ("Fixed");
    glownybohater bohater;
    poboczna osiol ;
    Plecak plecak;

    cout << "Podaj twoje imie: ";
    cin >> bohater.glownybohaterimie;
    bohater.WalkaTutorial( osiol  );
    plecak.Test();


//    cout << "Hello world!" << endl;
    return 0;
}

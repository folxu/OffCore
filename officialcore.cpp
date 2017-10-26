#include <iostream>
#include <string>
#include "officialcore.h"
#include <windows.h>
using namespace std;
glownybohater::glownybohater() { }


void glownybohater::WalkaTutorial(poboczna osiol )
{
    cout << "===================" << endl;
    cout << "Co chcesz zrobic?" << endl;
    cout << "===================" << endl;
    cout << "1.Uderz przeciwnika (AutoAtak)" << endl;
    cout << "2.Uzyj Skilla!" << endl;
    cout << endl;
    cout << "Twoj wybor: ";
    cin >> twojwybortutorial;

    switch (twojwybortutorial)
    {
    case 1:
        cout << glownybohaterimie << ", przygotowywujesz sie do walki.. " << endl;
        cout << "Zbierasz sily ii...";
        Sleep(1000);
        cout << "zadajesz: ";
        glownybohater::ZadajDMG();
        cout << " pkt obrazen! " << endl;
        Beep(400,400);
        Sleep(500);
        cout << endl;
        cout << osiol.imie << " wykonuje cios i zadaje Ci: ";
        osiol.PZadanyDMG = osiol.PAtak + osiol.PSila;
        cout << osiol.PZadanyDMG << " obrazen! " << endl;
        MainZostaloHP = MainHP - osiol.PZadanyDMG;
        cout << "Zostalo Ci: " << MainZostaloHP << " HP! " << endl;
        Sleep(1000);
        if (MainZostaloHP == 0)
        {
            cout << "Zostales pokonany przez " << osiol.imie << endl;
        }

        break;
    case 2:
        glownybohater::MenuSkilli();
        break;
    default:
        cout << "Wybierz 1 lub 2";
    }


}

void glownybohater::ZadajDMG()      // Do edycji.
{
    MainZadanyDMG = MainAtak * MainSila % MainPrzebicie;
    cout << MainZadanyDMG;
}


void glownybohater::MenuSkilli()
{
	if (MainPoziom >= 3)
	{
		glownybohater::ZaladujSkille();
	}
	else
	{
		cout << "Skille sa dostepne od poziomu 3!" << endl;
		cout << "Aktualnie posiadasz: " << MainPoziom << " poziom " << endl;
		cout << endl;
	}
}

void glownybohater::ZaladujSkille()
{
    cout << "Lista twoich aktualnych skilli:" << endl;
}

void Plecak::Test()
{
    Jablko + 1;
    cout << Jablko << endl;
}

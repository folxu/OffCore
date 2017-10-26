#include <iostream>
#include <string>

using namespace std;

class poboczna
{
public:
	string imie = "Tutorial osiol";	// zwany Baran
	int PAtak = 49;					// Atak => Hit => Default: 5
	int PObrona = 10;				// Obrona   |	Defaultowo [10]
	int PSila = 1;					// Sila     |	Defaultowo [100]
	int PHP = 100;					// HP       |	Defaultowo [100]
	int PZadanyDMG;					// Zliczenie Zadanych Obrazen
	int PZostaloHP;					// Ilosc HP jakie zostalo.
};

class glownybohater
{
public:
    string glownybohaterimie;
    int MainAtak = 2;				    // Atak => Hit => Default: 2
	int MainObrona = 5;				    // Obrona |		[Defaultowo 5]
	int MainSila = 1;				    // Sila   |		[Defaultowo: 5]
	int MainPrzebicie = 5;              // Nwm czy dziala... xD!
	int MainHP = 50;				    // Zdrowie|		[Defaultowo: 50 + zwiekszenie z lvlem]
	int MainZadanyDMG;				    // Zliczenie zadanych obra¿eñ
	int MainZostaloHP;				    // Ilosc HP jakie zostalo
	int MainPoziom = 1;				    // Poziom => Na start 1lvl.

//  DO WALK
    int twojwybortutorial;
    int twojnextwybortutorial;

	glownybohater();
	void ZadajDMG();                        // Zadaje DMG
	void WalkaTutorial(poboczna osiol);     // Walka w tutorialu
	void MenuSkilli();                      // Menu do skilli
	void ZaladujSkille();                   // Wczytuje skille jesli mamy wiekszy lvl niz 3!


};

class Plecak
{
public:
    int Jablko = 0;
    int Miecz = 0;

    void Test();
};

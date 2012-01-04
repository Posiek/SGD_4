/*
System dialogowy RPG
Program przygotowywany podczas zajec SGD
PJWSTK Gdansk
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <windows.h> 

using namespace std;

int main(int argc, char *argv[])
{
	bool wyjscie = false;

	cout << "Witaj podrozniku. Jesli to czytasz to znaczy, ze z jakiegos powodu znalazles sie w mroznym swiecie Skyrim" << endl; 
	cout << "Przed Toba zostanie postawione zadanie odpowiedniego poprowadzenia rozmowy z pewnym jegomosciem. Jesli Ci sie powiedzie czeka Cie chwala, jesli nie... sam sam sie przekonasz" << endl;
	cout << endl;

	while( wyjscie == false )
    {

		cout << "1. Wyzwanie" << endl; 
		cout << "2. Ucieczka" << endl; 
		cout << "Czy podejmujesz sie wyzwania?" << endl;

		int rozpoczecieDecyzja;
		//Sprawdzanie czy podjeta decyzja miesci sie w zakresie 1-2
		do{
			cout << "Twoj decyzja: _\b";
			cin >> rozpoczecieDecyzja;
		} while ( rozpoczecieDecyzja > 2 || rozpoczecieDecyzja <= 0 );

		if( rozpoczecieDecyzja == 2) {
			wyjscie = true;
		} else {
			system("CLS");
			cout << "Lorem ipsum dolor" << endl; 
		}
	}




	//Sleep(5000);

	/*
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN  | FOREGROUND_INTENSITY);
    cout << "Chyba wszystko jasne :)" << endl; 
	*/

    
    return 0;


}

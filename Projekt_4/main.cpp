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

	//while( wyjscie == false ) cos chrzani ta petla niestey :<
    //{


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
			//wyjscie = true;
			exit (1); 
		} else if( rozpoczecieDecyzja == 1) {
			system("CLS");
			cout << "Swiat stoi na progu wojny, a Ty zostales wyslany w pojedynke do miasta znajdujacego sie daleko na polnocy, by przekazac wazna wiadomosc Szalenczemu Krolowi." << endl;
			cout << "Czy uda Ci sie zapobiec wojnie? i smierci tysiecy ludzi?" << endl;
			Sleep(3000);

			cout << endl;
			cout << "Idac po zimnym kamieniu, slyszac tylko wiatr cicho roznoszacy sie po czelusciach zamku w Whiterun. Stajesz przed krolem" << endl;
			cout << endl;
			cout << "Szalony Krol:" << endl;
			cout << "Co sprowadza wyslanca Minas Tirith do mego krolestwa?";
			cout << endl;
			cout << endl;
			cout << "1. Drogi krolu jestem tu po to, by zapobiec wojnie pomiedzy naszymi krolestwami" << endl; //odpowiedz dobra
			cout << "2. Zostalem wyslany przez samego Theodara Wspanialego by przekazac ci, ze nasz kraj jest gotowy do negocjacji." << endl; // odpowiedz neutralna
			cout << "3. Jak smiesz grozic memu kraju wojna uzurpatorze?!" << endl; // odpowiedz zla
			cout << "Twoj decyzja: _\b";

		int turaPierwsza; //zmiena przechowujaca decyzje podjeta podczas rozmowy
			cin >> turaPierwsza;

		int krolPostawaWobecGracza = 0; //zmienna przechowujaca poziom szacunku dla gracza | zalozmy dolna granice -1000 (porazka), a gorna 1000 (sukces)
			
			if( turaPierwsza = 1)
				krolPostawaWobecGracza = krolPostawaWobecGracza + 100; //zwiekszymy poniewaz gracz wybral odpowiedz, ktora w tym wypadku "podobala" sie krolowi
			else if( turaPierwsza = 2)
				krolPostawaWobecGracza = krolPostawaWobecGracza; //Odpowiedz neutralna nie wplynela na podjecie decyzji
			else if( turaPierwsza = 3)
				krolPostawaWobecGracza = krolPostawaWobecGracza - 100; //Zmniejszamy szacuneczek przez to, ze padla odpowiedz "denerwujaca" krola

			if( turaPierwsza = 1)
				cout << "Szalony Krol:" << endl;
				cout << "Hmm... Nie powiem, ze rowniez jestem przeciwny wojnie z twoim krajem. Jednak czemuzbym mial podjac taka decyzje?"



			Sleep(3000);
		}


	//} klamerka od while == false




	//Sleep(5000);

	/*
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN  | FOREGROUND_INTENSITY);
    cout << "Chyba wszystko jasne :)" << endl; 
	*/

    
    return 0;


}

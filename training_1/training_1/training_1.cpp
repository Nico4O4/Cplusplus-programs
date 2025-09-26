#include <iostream>
#include <string>
using namespace std;

//merken: C++ läuft von oben bis unten mit if / else / schleifen kann man den fluss ändern / anhalten / beenden

int main() {
	string benutzername = "nico";
	string user_eingabe_benutzer; //für zwischenspeichern und zum vergleich
	
	int passwort = 912;
	int user_eingabe_passwort; //für zwischenspeichern und zum vergleich
	
	cout << "\nBenutzernamen eingeben: ";
	cin >> user_eingabe_benutzer;


	if (user_eingabe_benutzer == benutzername)
	{
		cout << "Benutzernamen gueltig\n\n";
	}


	else
	{
		cout << "Benutzername ungueltig\n";
		return 0;
	}


	cout << "\nPasswort eingeben: ";
	cin >> user_eingabe_passwort;


	if (user_eingabe_passwort == passwort)
	{
		cout << "eingeloggt als: " << benutzername << endl; // endls = end line = neue zeile
	}

	else 
	{
		cout << "Login denied\n\n";
	}
}




//stat 1 executed 1 time before code block execution / stat 2 defines condition for executin block / stat 3 executed every time
// STATEMENTS sind getrennt markiert durch -> ;

//-- Ideen KEINE pflicht --//


//mehrere nutzer
//nutzer hinzufügen / entfernen (array / json?)
//navigieren nach dem login (irgendwas zeigen wenn man drinn ist zb. story oder so? ("server gehackt story") )
//timer einbauen oder for loop für coole anzeigen zb download 10, 20 , 50%+

#include <iostream>
#include <string>
using namespace std;


int main() {
	string benutzername = "nico";
	string user_input_name; //für zwischenspeichern und zum vergleich

	string password = "211"; //mache ich später sobald ich es besser verstehe aktuell geht es einfach nocht nicht 
	string user_input_paswd; //für zwischenspeichern und zum vergleich

	int login_trys = 0; //login versuche speichern


	while (login_trys < 5) {
		
		cout << "\nUsername: ";
		cin >> user_input_name;


		if (user_input_name == benutzername) {
			cout << "Username: " << user_input_name << " found\n";
			break;
		}


		else 
		{
			login_trys += 1;
			cout << "Login denied\n";
			
		}
		


	}
	
	}



//------------Notizen--------------
//stat 1 executed 1 time before code block execution / stat 2 defines condition for executin block / stat 3 executed every time
// STATEMENTS sind getrennt markiert durch -> ;
//merken: C++ läuft von oben bis unten mit if / else / schleifen kann man den fluss ändern / anhalten / beenden

//ist ein traingsprojekt kann gerne genutzt werden :)

//coded by: Nico4O4

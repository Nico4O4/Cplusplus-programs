#include <iostream>
using namespace std; //um std weg zu lassen

char gradeFunction(double average) { //eine funktion definiert als char (char nimmt alles als nur 1 zeichen mit '')  
    if (average >= 210) return 'A';
    
    else if (average >= 190) return 'B';  // wenn die punktzahl grösser oder gleich wie 70 ist gibt es den char B zurück

    else if (average >= 180) return 'C';

    else if (average >= 150) return 'D';

    else if (average >= 133) return 'E';

    else if (average >= 102) return 'F';

    else return 'FF';
}

int main() { // main funktion
    int eingabe;
    double summe = 0, note;

    cout << "Wieviele Noten? 1-10 moeglich \n";
    cin >> eingabe; 


    if (eingabe < 1 || eingabe > 10) { 
        cout << "Ungueltige Eingabe. Nur 1-10 eingeben. \n";
        return 1;
    }


    for (int zaehler = 1; zaehler <= eingabe; zaehler++) {
        cout << "Test: " << zaehler << " -> ";
        cin >> note;
        summe += note;
    }

    double average = summe / eingabe;

    cout << "Durchschnitt " << average << "\n";

    cout << "Note " << gradeFunction(average) << "\n";

    return 0;

}



#include <iostream>
using namespace std;

int main() {

    int first_number;
    int second_number;

    cout << "Enter the first number: ";
    cin >> first_number;

    cout << "Enter the second number: ";
    cin >> second_number;


    if (first_number > second_number)//erste zahl grösser als >
    {
        cout << "Ur first number is greater";
    }


    else if (first_number < second_number)//zweite zahl grösser als <
    {
        cout << "Ur second number is greater";
    }


    else //else hat NIEMALS eine bedingung
    {
        cout << "Both numbers are qeual :p";
    }
   


    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int first_number;
    int second_number;

    cout << "Enter the first number" << "\n -> ";
    cin >> (first_number);

    cout << "Enter the second number" << "\n -> ";
    cin >> (second_number);

    if (first_number > second_number) {
        cout << "Ur first number is greater!";
    }
    
    else {
        cout << "Ur second number is greater";
    }

   
    return 0;
}

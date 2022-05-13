#include <iostream>
using namespace std;

// Numerele prietene sunt perechile de numere 
// în care fiecare număr în parte este suma divizorilor (toți divizorii proprii și 1) celuilalt număr.
// Primele seturi de numere prietene sunt (220, 284), (1184, 1210), (2620, 2924), (5020, 5564), (6232, 6368).

int main (){

    int n1, n2, s1 = 1, s2 = 1;

    cout << "Alege un numar: ";
    cin >> n1;
    cout << "Mai alege un numar: ";
    cin >> n2;

    for(int i=2; i<=n1/2; i++){
        if (n1 % i == 0){
            s1 = s1 + i;
        }
    }

    for(int j=2; j<=n2/2; j++){
        if (n2 % j == 0){
            s2 = s2 + j;
        }
    }

    if(s1 == n2 && s2 == n1){
        cout << "Numerele sunt prietene" << endl;
    } else {
        cout << "Numerele nu sunt prietene" << endl;
    }

    return 0;
}
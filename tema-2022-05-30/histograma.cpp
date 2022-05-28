#include <iostream>

/**
 * 13. Se citeste de la tastatura un numar natural n de cel mult 9 cifre. 
 * Se cere sa se afiseze pe ecran histograma cifrelor.
 * Pentru fiecare cifra care apare in numar se va afisa un numar de * egal
 * cu frecventa de aparitia cifrei respective in nr. initial.
 */

using namespace std;

int main (){

    int n, c, copieN;

    cout << "Alege un nr: ";
    cin >> n;
    
    copieN = n;

    for (int i=0; i<=9; i++){
        cout << i << ":";
        n = copieN;

        while (n != 0){
            c = n % 10;
            if (i == c){ 
                cout << "*";
            }
            n = n / 10;
        }
        cout << endl;
    }
    return 0; 
}

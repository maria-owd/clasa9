#include <iostream>
using namespace std;
/**
 * Se da un nr n
 * se se afiseze pozitiile pe care se afla cifrele prime
 * si media aritmetica a cifrelor impare
 */

int main (){

    int n, c, suma, numarCifre, numarDivizori, pozitia;

    cout << "n= ";
    cin >> n;

    pozitia = 1;
    suma = 0;
    numarCifre = 0;

    while (n != 0){
        c = n % 10;

        if (c % 2 == 1){
            numarCifre++;
            suma = suma + c;
        }

        // calculam divizari
        numarDivizori = 0;
        for (int i=2; i<=c/2; i++){
            if (c % i == 0){
                numarDivizori++;
            }
        }

        if (numarDivizori == 0){
            cout << "am gasit cifra prima " << c << " pe pozitia " << pozitia << endl; 
        } else {
            cout << "cifra " << c << " are " << numarDivizori << " divizori" << endl;
        }

        pozitia++;
        n = n / 10;
    }

    cout << suma / numarCifre << endl;
}
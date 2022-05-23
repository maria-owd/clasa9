/*
se citesc n numere naturale. sa se afizeze
    - numarul de numere prime introduse
    - media tuturor cifrelor
    - cea mai mare cifra
    - cea mai mica cifra
    - produsul numerelor introduse
    */

#include <iostream>

using namespace std;

int main (){

    int n, a, numarDivizori, numarNumere, c, numarCifre, cifraMax, cifraMin, p;
    float media, suma;

    cout << "Cate nr vrei: ";
    cin >> n;

    numarNumere = 0;
    numarCifre = 0;
    suma = 0;
    cifraMax = 0;
    cifraMin = 10;
    p = 1;

    for (int i=1; i<=n; i++){
        cout << "Introdu nr " << i << ": ";
        cin >> a;
        numarDivizori = 0;
        
        for (int j=2; j<=a/2; j++){
            if (a % j == 0){
                numarDivizori++;
            }
            
        }

        if (numarDivizori == 0){
            cout << "nr prim" << endl;
            numarNumere++;
        }

        while (a != 0){
            c = a % 10;
            suma = suma + c;
            numarCifre++;
            p = p * a;

            if (c > cifraMax){
                cifraMax = c;
            }

            if (c < cifraMin){
                cifraMin = c;
            }
            a = a / 10;
        }
    }

    media = suma / numarCifre;
    
    cout << "avem " << numarNumere << " numere prime" << endl;
    cout << "media cifrelor e: " << suma << "/" << numarCifre << "=" << media << endl;
    cout << "cea mai mare cifra e: " << cifraMax << endl;
    cout << "cea mai mica cifra e: " << cifraMin << endl;
    cout << "produsul numerelor e: " << p << endl;

    return 0;
}

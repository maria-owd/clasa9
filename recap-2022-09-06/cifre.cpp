#include <iostream>
using namespace std;
int main (){

    int n, cifra, copieN, pozitie, nPare, rang, inversN;
    
    cout << "n=";
    cin >> n;

    copieN = n;
    pozitie = 1;
    nPare = 0;
    rang = 1;
    inversN = 0;

    while (copieN != 0){
        cifra = copieN % 10;

        inversN = inversN * 10 + cifra;

        if (cifra % 2 == 0){
            nPare = cifra * rang + nPare;
            rang = rang * 10;
        }

        cout << "cifra "  << cifra << " este pe pozitia: " << pozitie << endl;
        copieN = copieN / 10;
        pozitie++;
    }

    if (n == inversN){
        cout << "palindrom" << endl;
    } else {
        cout << "nu e palindrom" << endl;
    }

    cout << "nr format din cifrele pare este: " << nPare << endl;
    cout << "nr inversat este: " << inversN << endl;

    return 0;
}
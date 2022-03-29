#include <iostream>

using namespace std; 

int main(){

    int n, nInitial, cifre,c, cifrePare, sumaImpare, produs, sumaCifre, nr6, cMax,nrMax, oglindit;

    //cout<< "n=";
    //cin >> n;
    n = 43212234; // test

    nInitial = n; // tinem minte pt. verificarea finala cu oglinditul
    cifre = 0;  // numarul de cifre
    cifrePare = 0;
    sumaImpare = 0;
    produs = 1;
    sumaCifre = 0;
    nr6 = 0;
    cMax = 0; 
    nrMax = 0;
    oglindit = 0;
    
    while (n != 0){
        c = n%10; 
        cifre++;

        if (c%2 == 0){
            cifrePare++;
        } else {
            sumaImpare = sumaImpare + c;
        }

        produs = produs * c;
        sumaCifre = sumaCifre + c;

        if (c == 6){
            nr6++;
        }

        if (c > cMax){
            cMax = c; // tin minte NOUL maxim
            nrMax = 0; // numar aparitiile pt NOUL maxim de la zero
        }

        if (c == cMax){
            nrMax++;
        }

        oglindit = oglindit * 10 + c;

        n = n/10; // ultima instructiune din while -> se calculeaza noul nr
    }

    cout << "Numarul de cifre este: " << cifre << endl;  
    cout << "Cifre pare: " << cifrePare << endl;

    if (sumaImpare == 0){
        cout << "Nu are cifre impare" << endl;
    } else {
        cout << "Suma impare: " << sumaImpare << endl;
    }
    cout << "Produsul cifrelor este: " << produs << endl;

    if (cifre != 0){
        cout << "Media cifrelor: " << sumaCifre/cifre << endl;
    } else {
        cout << "nu se poate calcula media" << endl;
    }

    if (nr6 == 0){
        cout << "Nicio cifra de 6" << endl;
    } else {
        cout << "numarul cifrelor de 6: " << nr6 << endl;
    }

    cout << "Cifra maxima este: " << cMax << endl;
    cout << "Aparitia cifrei maxime este: " << nrMax << endl;
    cout << "Oglinditul nr este: " << oglindit << endl;

    if (oglindit == nInitial){
        cout << nInitial << " este palindrom " << endl;
    } else {
        cout << nInitial << " NU este palindrom" << endl;
    }

    return 0;
}
/**
 se citesc N numere naturale - sa se afiseze
  - cate numere formate doar din cifrele impare (in aceeasi ordine)  sunt prime
  - media numerelor formate doar din cifrele pare in ordine inversa
 */

#include <iostream>

using namespace std;

int main (){

    int n, a, c, y, z, rang, numarNumere, numarDivizori, numerePare;
    float media, suma;

    cout << "cate nr citesti: ";
    cin >> n;
    numarNumere = 0;
    suma = 0;
    numerePare = 0;


    for (int i=1; i<=n; i++){
        cout << "introdu nr " << i << ": ";
        cin >> a; 
        y = 0;
        rang = 1;
        z = 0; 
        numarDivizori = 0;

        while (a != 0){
            c = a % 10;

            if (c % 2 == 1){
                y = c * rang + y;
                rang = rang * 10;
            }

            if (c % 2 == 0){
                z = z * 10 + c;
            }
            a = a /10;
        }
        cout << y << endl;

        suma = suma + z;
        numerePare++;
        
        cout << z << endl;

        for (int j=2; j<=y/2; j++){
            if (y % j == 0){
                numarDivizori++;   
            }
        }

        if (numarDivizori == 0){
            numarNumere++;
        }
    }

    cout << "numarul nr. prime formate doar din cifrele impare sunt: " << numarNumere << endl;

    media = suma / numerePare;
    cout << "media nr cu cifre pare e: " << media << endl;

    return 0;
    
}

#include <iostream>
using namespace std;
int main (){

    int n, c, s, a, copie, numarNumere, media;

    cout << "n= ";
    cin >> n;
    
    s = 0;
    numarNumere = 0;

    for (int i=1; i<=n; i++) {
        cout << "introduce nr " << i << ": " ;
        cin >> a;
        copie = a;

        while (a != 0){
            c = a % 10;
            a = a / 10;

        }

        if (c % 2 == 0){
            cout << copie << endl;    
        } else {
            numarNumere++; // am cifra impara
            s = s + copie;
        }
    }

    if (numarNumere > 0){
        media = s / numarNumere;
        cout << "media aritmetica este: " << media << endl;
    }
    
    return 0;
    
}
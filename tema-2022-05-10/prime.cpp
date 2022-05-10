#include <iostream>
using namespace std;

/**
 * Se citesc n numere intregi. 
 * Afisati:
 *      - toate numerele prime citite
 *      - media aritmetica a numelor neprime
 */

int main(){
    int n, a, numarDivizori, numereNeprime, s;

    cout << "cate numere doriti sa introduceti: ";
    cin >> n;
    numereNeprime = 0;
    s = 0;

    for (int i=0; i<n; i++){
    
        cout << "introduceti un numar: ";
        cin >> a;
        numarDivizori = 0;

        for (int j=2; j<=a/2; j++){
            if (a%j == 0){
                numarDivizori++;
            }
        }
    
        if (numarDivizori == 0 && a > 1){
            cout << "numarul " << a << " e prim" << endl;
        } else {
            numereNeprime++;
            s = s + a;
            
        } 
    }
    if (numereNeprime == 0){
        cout << "nu avem numere neprime" << endl;
    } else {
        cout << "media numerelor neprime este: " << s/numereNeprime << endl;
    }

    return 0;
}

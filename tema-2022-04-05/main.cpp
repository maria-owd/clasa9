#include <iostream>

using namespace std;


/** 
 * se citesc nr. nat. de la tastaura
 *  sa se afiseze numerele citite care au in componenta 
 * lor cel putin o cifra egala cu cifra mxima a primului numar citit
 * daca nu au, sa se afiseze un mesaj
 */
int main(){
    int n, x ,c , cifraMaxima, copieX, aparitiiMaxim, numereGasite;
    
    cout << "cate nr cititi:"; // cate numere se citesc de la tastatura
    cin >> n;
    
    cout << "primul nr:";
    cin >> x;

    // 1. aflam cifra maxima a primului nr (x)
    cifraMaxima = 0;
    
    while ( x != 0){
        c = x%10;
        if (c > cifraMaxima){
            cifraMaxima = c; 
        }
        x = x/10;
    }
    cout << "cifra maxima este: " << cifraMaxima << endl;

    numereGasite = 0;

    // 2. citim restul de numere
    while(n > 1){
        // introduceti alt numar
        cout << "introduceti alt numar: ";
        cin >> x;

        copieX = x; // salvam copia lui x pt afisare
        aparitiiMaxim = 0;

        while ( x != 0){
            c = x%10; 
            if (c == cifraMaxima){
                aparitiiMaxim++;
            }
            x = x/10;
        } 

        if (aparitiiMaxim > 0){
            cout << copieX << endl;
            numereGasite++;
        } 
        n--;
    }

    if (numereGasite == 0){
        cout << "nu am gasit niciun numar care contine cifra maxima" << endl;
    }

    return 0;
}


#include <iostream>

using namespace std;


/** 
Se citește de la tastatură un număr natural nenul n. 
Să se calculeze și să se afișeze pe ecran raportul dintre produsul cifrelor de rang par 
și suma cifrelor de rang impar ale lui n 
( rangul unei cifre este numărul său de ordine, numerotând cifrele de la dreapta la stânga, începând cu zero).

ex: 7231094 
        ||+----> pozitia 0
        |+-----> pozitia 1
        +------> pozitia 2
*/
int main(){
    int n,p,s,r,c;
    
    cout << "n=";
    cin >> n;

    p = 1; // prudusul
    s = 0; // suma
    r = 0; // rangul

    while (n!=0){
        // calculeaza cifra curenta
        c = n % 10;

        // verific rangul par sau impar
        if (r%2 == 0){
            p = p * c;
        } else {
            s = s + c;
        }

        // tai ultima cifra
        n = n / 10;

        // incrementez rangul
        r++;
    } 

    cout << "Raportul este: " << p / s << endl;

    return 0 ;
}
 

    




    
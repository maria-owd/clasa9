#include <iostream>

using namespace std;


/** 
Se citeste un nr natural n. Sa se afiseze:
- produsul cifrelor de rang par
- suma cifrelor de rang impar
rang = nr. sau de ordine, numerotandu-se de la dreapta la stanga

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

    cout << "Produsul: " << p << endl << "Suma: " << s << endl;

    return 0 ;
}
 

    




    
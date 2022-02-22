#include <iostream>
using namespace std;


/** 
munte - nr. sa aiba o secventa de cifre crescatoarea, urmata de o secventa de cifre descrescatoare
*/
int main(){
    int n, c1, c2;
    int v, m,p;


    cout << "n=";
    cin >> n;

    v = 0; // indicator care ne spune daca am gasit varful
    m = 1; // indicator care ne spune daca e munte sau nu (incepem optimist)
    p = 0; // indicator care ne spune daca am gasit panta 

    // ne oprim la pentultima cifra sau  cand stim ca nu e munte
    while (((n / 10 % 10) != 0) && (m == 1)){ 
        c1 = n%10;
        c2 = n / 10 % 10;
        n = n / 10;

        // suntem pe panta ascendenta
        if (v==0){
            if (c2 > c1){
                p = 1; // am gasit panta 
            } else {
                if (p==1){ // varful e valabil doar daca am gasit o panta
                    v = 1; // am gasit varful
                }
            }
        } 

        // suntem in coborare
        if (v==1){
            if (c2 >= c1){ // desi avem coborare, am gasit o urcare
                m = 0; // nu e munte
            }
        }
    }
    
    if (m==1 && v==1){
        cout << "e munte" << endl;
    } else {
        cout << "nu e munte" << endl;
    }

    return 0;
}
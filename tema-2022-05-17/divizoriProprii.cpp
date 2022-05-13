#include <iostream>
using namespace std;

/**  
 * Se citește de la tastură un număr natural nenul n<10000. 
 * Să se afișeze pe ecran cel mai mic și cel mai mare divizor propriu. 
 * Dacă nu există se va afișa numărul inițial. 
 * Exemplu: 
 * pentru n=45 se vor afisa 3 15.
 */

int main (){

    int n, divizorMin, divizorMax;

    cout << "Alege un numar: ";
    cin >> n;
    divizorMin = n;
    divizorMax = 0;

    for (int i=2; i<=n/2; i++){
        if (n % i == 0){
            if (i < divizorMin){
                divizorMin = i;
            }
            if (i > divizorMax){
                divizorMax = i;
            }
        }
    }
    if (divizorMax > 0){
        cout << divizorMin << " " << divizorMax << endl;
    } else {
        cout << n << endl;
    }

    return 0;
}


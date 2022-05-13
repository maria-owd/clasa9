#include <iostream>
using namespace std;
 /**
  * Se citește de la tastură un număr natural nenul n de cel mult 4 cifre. 
  * Să se verifice dacă suma divizorilor lui n este un număr prim. 
  * Dacă da, se va afişa suma divizorilor săi, altfel se va scrie numărul acestora. 
  * Exemplu:
  * pentru n=30 se va afisa 8 
  * pentru că: 1+2+3+5+6+10+15+30=72, deci 72 nu e prim, așa că se va afisa 8, numărul divizorilor 
  */

int main (){

    int n,s, numarDivizori, divizoriSuma;
    
    cout << "Alege un numar: ";
    cin >> n;

    s = 0;
    numarDivizori = 0;
   

    for (int i=1; i<=n; i++){
        if (n % i == 0){
            s = s + i;
            numarDivizori++;
        }
    }

    divizoriSuma = 0;

    for (int i=2; i<=s/2; i++){
        if (s % i == 0){
            divizoriSuma++;
        }
    }

    if (divizoriSuma == 0){
        cout << s << endl;
    } else {
        cout << numarDivizori << endl;
    }

    return 0;
}
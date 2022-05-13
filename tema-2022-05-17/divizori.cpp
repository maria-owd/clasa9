#include <iostream>
using namespace std;

/**  
 * Citiți un număr natural n 
 * și afișați toți divizorii pari ai acestuia 
 * sau un mesaj dacă numărul citit nu are divizori pari.
 */

int main (){

    int n, numarDivizori = 0;

    cout << "Alge un numar: ";
    cin >> n;

    if (n == 0){
        cout << "0 este multiplul oricarui numar" << endl;
        return 1;
    }
    for (int i=2; i<=n/2; i++){
        if (n%i == 0){
            if(i % 2 == 0){
                cout << i << endl;
                numarDivizori++;
            }
        }
    }

    if (numarDivizori == 0){
        cout << "Numarul nu are divizori pari" << endl;
    }

    return 0;
}

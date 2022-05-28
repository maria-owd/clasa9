#include <iostream>

/**
 * 10. Sa se verifice daca nr n este palindrom.
 * ex: 98789 e palindrom ; 123 nu e palindrom
 */

using namespace std;

int main (){

    int n, copieN, c, x;

    cout << "Alege un nr: ";
    cin >> n;

    copieN = n;
    x = 0;

    while (n != 0){
        c = n % 10;
        x = x * 10 + c;
        n = n/10;
    }

    if ( x == copieN){
        cout << "numarul " << copieN << " este palindrom" << endl;
    } else {
        cout << "numarul " << copieN << " nu este palindrom, inversat este " << x << endl;
    }
}
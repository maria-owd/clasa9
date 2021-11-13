#include <iostream>

using namespace std;
 
 /**
  * Fie un număr x format din exact 3 cifre citit de la tastatură. 
  * Să se depună cifrele numărului în trei variabile corespunzătoare unitaților, zecilor și și sutelor numărului, apoi să se afișeze cifrele astfel obținute. 
 */

int main(){

    int x,a,b,c;
    
    system("clear");

    cout << "Alege un nr. x de 3 cifre de forma [abc]: ";
    cin >> x;

    a = x / 100;
    b = (x / 10) % 10;
    c = x % 10 ;


    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;

    cout << "Cifra sutelor este " << a << endl;
    cout << "Cifra zecilor este " << b << endl;
    cout << "Cifra unitatilor este " << c << endl;

    cout << endl << endl;
    return 0;

    
}

 
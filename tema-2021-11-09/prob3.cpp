#include <iostream>

using namespace std;

/**
 * Fie un număr x format din exact 4 cifre citit de la tastatură. 
 * Să se inverseze cifra unităţilor cu cifra sutelor. Să se afişeze rezultatul.
 */
int main(){
    int x,y,a,b,c,d;
    
    cout << "Alege un nr. x de 4 cifre: ";
    cin >> x;
    
    a = x / 1000;
    b = (x / 100) % 10;
    c = (x % 100) / 10;
    d = x % 10;

    y = a*1000 + d*100 + c*10 + b;

    cout << "Nr. inversat este " << y << "\n";

    return 0;
}

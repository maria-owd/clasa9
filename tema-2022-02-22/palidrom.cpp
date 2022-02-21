#include <iostream>

using namespace std;


/** 
palidrom = cifrele unui nr. au aeeasi valoare si de la stanga-dreapta si invers 
*/


int main(){
    int n, x, c, y;
    cout << "n=";
    cin >> n;

    y = n; // tinem minte n initial
    
    x=0;

    while(n!=0){
        c = n%10;
        n = n/10;
        x = x * 10 + c;
    }
    
    if (x == y){
        cout << "palindrom" << endl;
    } else {
        cout << "nu e palindrom" << endl;
    }

    return 0;
}
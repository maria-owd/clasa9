#include <iostream>

using namespace std;

/**
 * cifra de control
 */

int main(){
    
    int n,c,s;

    cout << "n=";
    cin >> n;


    /** varianta a - cu doua structuri repetitive **/

    while (n>9){
        s = 0;
        while (n!=0){
            c = n%10;
            s = s+c;
            n = n/10;
        }

        cout << "   - suma (noul n): " << s << endl; 
        n = s;
    }
    cout << "cifra de control este (var. a): " << n << endl;



    // varianta b - o singura structura repetitiva
    while (n>9){
        n = n/10 + n%10;
    }
    cout << "cifra de control este (var. b): " << n << endl;


    // varianta c - fara structura repetitiva
    c = n%9;
    if (c == 0){
        c = 9;
    }
    cout << "cifra de control este (var. c): " << c << endl;

}
#include <iostream>

using namespace std;


/** 
Se dau doua numere naturale - sa se verifica daca reprezinta termeni consecutivi in sirul lui Fibonacci
*/
int main(){
    int a, b, t, f1, f2;
    
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    
    if (a<b){
        // inversam numerele, sa avem in ordine b < a
        t = a;
        a = b;
        b = t;
    }

    // initializam primele 2 numere din sir
    f1 = 1;
    f2 = 1;
    // stim ca tot timpul b < a
    while (f1 <= b){
        // f1 - f2
        if (b == f1 && a == f2){
            cout << "consecutive" << endl;
            return 1;
        }

        t = f1 + f2; // urmatorul din sir
        f1 = f2;
        f2 = t;
    }

    cout << "nu sunt consecutive, nu stiu ce kkt de numere ai bagat!" << endl;

    return 0;
}
#include <iostream>

using namespace std;


/** 
Se dau doua numere naturale - sa se verifica daca reprezinta termeni consecutivi in sirul lui Fibonacci
*/
int main(){
    int a, b, t, c;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    c = a;
    if (a<b){
        t = a;
        a = b;
        b = t;
    }
    while (c>1){
        c = a-b;
        a = b;
        b = c;
    }
    if (c==1){
        cout << "da" << endl;
    } else {
        cout << "nu" << endl;
    }
    return 0;
}
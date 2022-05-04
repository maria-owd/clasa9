#include <iostream>

using namespace std;

int main(){

    int n, numarDivizori,s;

    cout << "n=";
    cin >> n;

    if (n == 0){
        cout << "0 se divide cu orice numar" << endl;
        return 1;
    }

    
    // a) afisarea tuturor divizorilor proprii ai numarului citit

    cout << "a. divizorii proprii: ";
    numarDivizori = 0;
    s = 0;

    for (int i=2; i<=n/2; i++){
        if (n % i == 0){
            cout << i << " ";
            numarDivizori++;
            s = s + i;
        }
    }
    if(numarDivizori == 0){
        cout << "numarul este prim";
    }
    cout << endl;

    // b) suma tuturor divizorilor numarului citit (proprii si improprii)

    // adaugam divizorii improprii
    s = s + 1;    // 1 este divizorul oricarui numar
    if (n > 1){
        s = s + n; // un numar se divide cu el insusi
    }
    
    cout << "b. suma divizorilor este: " << s << endl;

    // c) verificarea daca numarul citit este un numar perfect sau nu 
    // (un numar este perfect daca el este egal cu suma tuturor divizorilor sai, mai putin el insusi. 
    // Un exemplu de numar perfect este 6, pentru ca 6=1+2+3. 
    // Alt numar perfect este 28, pentru ca 28=1+2+4+7+14. 
    // Urmatorul numar perfect este 496, pentru  ca 496=1+2+4+8+16+31+62+124+248)

    if (n == s-n){
        cout << "c. numarul este perfect" << endl;
    } else {
        cout << "c. numarul nu este perfect" << endl;
    }

    return 0;
}
    
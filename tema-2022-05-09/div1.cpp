    
    
    // a) afisarea tuturor divizorilor proprii ai numarului citit
    // b) suma tuturor divizorilor numarului citit (proprii si improprii)
    // c) verificarea daca numarul citit este un numar perfect sau nu 
    // (un numar este perfect daca el este egal cu suma tuturor divizorilor sai, mai putin el insusi. 
    // Un exemplu de numar perfect este 6, pentru ca 6=1+2+3. 
    // Alt numar perfect este 28, pentru ca 28=1+2+4+7+14. 
    // Urmatorul numar perfect este 496, pentru ca 496=1+2+4+8+16+31+62+124+248)

    #include <iostream>
    using namespace std;
    int main() {

        int n, s;

        cout << "n= ";
        cin >> n;
        s = 0;

        for (int i=2; i <= n/2; i++) {

            if (n%i == 0){
                cout << i << endl;
                s = s + i;
            }
        }

        if (s == 0){
            cout << "nr e prim" << endl;
        }
        if (n>1){
            s = s + 1 + n;
        } else {
            s = n;
        }
        cout << "suma e: " << s << endl;

        if (n == s-n){
            cout << "nr e perfect" << endl;
        } else {
            cout << "nr nu e perfect" << endl;
        }

        return 0;
    }


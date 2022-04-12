#include <iostream>

using namespace std;

/**
 * verficati daca a si b sunt formate din aceleasi cifre
 */

int main(){
    int a,b,ca,cb, aparitiiCifra, copieB, copieA, cifreCareNuApar; 
    
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    copieB = b;
    copieA = a;

    cifreCareNuApar = 0;

    while (a != 0){
        ca = a%10;
        aparitiiCifra = 0;
        b = copieB;

        while (b != 0){
            cb = b%10;

            if(ca == cb){
                aparitiiCifra++;
            }
            b = b/10;
        }
        
        if (aparitiiCifra == 0){
            cifreCareNuApar++;
        }
        
        a = a/10;
    }

    b = copieB;
    while (b != 0){
        cb = b%10;
        aparitiiCifra = 0;
        a = copieA;

        while (a != 0){
            ca = a%10;

            if(ca == cb){
                aparitiiCifra++;
            }
            a = a/10;
        }
        
        if (aparitiiCifra == 0){
            cifreCareNuApar++;
        }
        
        b = b/10;
    }

    if (cifreCareNuApar == 0) {
        cout << "numerele sunt formate din aceleasi cifre" << endl;
    } else {
        cout << "numerele nu sunt formate din aceleasi cifre" << endl;
    }
    
    return 0;
}
   
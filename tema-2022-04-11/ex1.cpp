#include <iostream>

using namespace std;

/**
 * verficati daca a si b sunt formate din aceleasi cifre
 */

int main(){
    int a,b,ca,cb, aparitiiCaInB, copieB, cifreCareNuApar; 
    
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    copieB = b;
    cifreCareNuApar = 0;

    while (a != 0){
        ca = a%10;
        aparitiiCaInB = 0;
        b = copieB;

        while (b != 0){
           cb = b%10;

           if(ca == cb){
               aparitiiCaInB++;
           }
            b = b/10;
        }
        
        if (aparitiiCaInB == 0){
            cifreCareNuApar++;
           // cout << "cel putin o cifra nu exista in nr b" << endl;
            // return 1;
        }
        
        a = a/10;
    }
    if (cifreCareNuApar == 0){
        cout << "toate cifrele apar in nr b" << endl;
    } else{
        cout << "numerele nu sunt formate din aceleasi cifre" << endl;
    }
    
    return 0;
}
   
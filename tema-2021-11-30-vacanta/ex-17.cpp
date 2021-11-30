#include <iostream>

using namespace std;


/** Se citește de la tastatură o valoare naturală x, unde x>10.
Dacă valoarea
citită are cifra unităților egală cu cifra zecilor se vor afișa 
primele două numere naturale mai mari decât valoarea x. 
În caz contrar se va afișa cifra maximă dintre cifra zecilor și a unităților.
Exemplu: Pentru x=3455 se va afișa 3456 3457 Pentru x=3485 se va afișa 8. 
*/


int main(){
    int x,z,u;
   
    cout << "x=";
    cin >> x;

    if(x<10){
        cout << "eroare, nr. trebuie sa fie mai mare ca 10" << endl;
        return 1;
    }
    
    u = x%10;
    z = (x/10)%10;

    if(z==u){
        cout << x+1 << " "<< x+2 << endl;
    } else{
        if(z>u){
            cout << z << endl;
        } else{
            cout << u << endl;
        }
    }
     
     
    return 0;
}



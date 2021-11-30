#include <iostream>

using namespace std;


/** 
  Fie x număr natural. Să se determine ultima cifră a lui 2^x (doi la puterea x).
*/


int main(){
    int x,r;
   
    cout << "x=";
    cin >> x;

    r = x%4;

    // metoda ciobaneasca
    if(r==0){
        cout << 6 << endl;
    }
    if(r==1){
         cout << 2 << endl;
     }
    if(r==2){
        cout << 4 << endl;
    }
    if(r==3){
        cout << 8 << endl;
    }

    // metoda semi-ciobaneasca
    switch (r){
        case 0:
            cout << 6 << endl;
            break;
        case 1:
            cout << 2 << endl;
            break;
        case 2:
            cout << 4 << endl;
            break;
        case 3:
            cout << 8 << endl;
            break;
    }

    // metoda eleganta

    const int ultimaCifra[4] = {6, 2, 4, 8};

    cout << ultimaCifra[r] << endl;

    return 0;
}

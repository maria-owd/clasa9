#include <iostream>

using namespace std;


/**

 Se citește de la tastatură un număr natural n cu exact 4 cifre. Să se verifice dacă numărul este:
 Echilibrat - spunem că un număr este echilibrat dacă numărul de cifre pare este egal cu numărul de
cifre impare.
Pitic - spunem că un număr este pitic dacă toate cifrele sunt mai mici decât 4.
Generos - spunem că un număr este generos dacă suma cifrelor lui e mai mare decat n+2.
*/


int main(){
    int n,a,b,c,d;
   
    cout << "n=";
    cin >> n;
    a = n/1000;
    b = (n/100)%10;
    c = (n/10)%10;
    d = n%10;

    if (a%2 + b%2 + c%2 + d%2 == 2){
        cout << "echilibrat" << endl;
    }
    if (a<4 && b<4 && c<4 && d<4){
        cout << "pitic" <<endl;
    }
    if (a+b+c+d>n+2){
        cout << "generos" <<endl;
    }

    return 0;

}

   
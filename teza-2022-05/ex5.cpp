/**
  se dau numerele n si k
  sa se determine daca numerul format din cifrele lui n care divid k este nr. prim!

  ex:  n = 345678  k=28 => 47 -> nr prim
 */

#include <iostream>
using namespace std;
int main (){

    int n, k, c, y, pozitia, numarDivizori;

    cout << "n= ";
    cin >> n;
    cout << "k= ";
    cin >> k;

    y = 0;
    pozitia = 1;

    while (n != 0){
        c = n % 10;
        n = n / 10;

        if (k % c == 0){
            y = y + c * pozitia;
            pozitia = pozitia * 10;
            // cout << c << " " << y << endl;
            
        }
    }

    numarDivizori = 0;

    for (int i=2; i<=y/2; i++){
        if (y % i == 0){
            numarDivizori++;
        }
    }

    if (numarDivizori == 0){
        cout << y << endl;
    }

    return 0;
}
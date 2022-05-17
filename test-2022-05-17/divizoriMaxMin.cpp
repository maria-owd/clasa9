#include <iostream>
using namespace std;
int main (){

    int n, divizorMin, divizorMax;

    cout << "Alege un nr: ";
    cin >> n;

    divizorMin = n;
    divizorMax = 0;

    for (int i=2; i<=n/2; i++){
        if (n % i == 0){
            if (i < divizorMin){
                divizorMin = i;
            }
            if (i > divizorMax){
               divizorMax = i;
            }
        }
    }
    if (divizorMax == 0){
        cout << n << endl;
    } else {
        cout << "divizorul minim este: " << divizorMin << endl;
        cout << "divizorul maxim este: " << divizorMax << endl;
    }

    return 0;
}
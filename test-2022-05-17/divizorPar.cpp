#include <iostream>
using namespace std;
int main (){

    int n, divizorMax;

    cout << "Alege un nr: ";
    cin >> n;

    divizorMax = 0;

    for (int i=2; i<=n/2; i=i+2){
        if (n % i == 0){
            if (i > divizorMax){
                divizorMax = i;
            }
        }
    }

    if (divizorMax == 0){
        cout << "nu are divizori pari" << endl;
    } else {
        cout << divizorMax << endl;
    }

    
    return 0;
}

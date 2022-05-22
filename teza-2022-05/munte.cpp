#include <iostream>

using namespace std;

int main(){

    int n, c, cifraPrecedenta;

    cout << "n= ";
    cin >> n;

    cifraPrecedenta = n % 10;
    n = n / 10;
    c = n % 10;

    while (c > cifraPrecedenta){

        cifraPrecedenta = c;
        n = n / 10;
        c = n % 10;
    }

    //cout << n << endl;

    while (c < cifraPrecedenta){

        cifraPrecedenta = c;
        n = n / 10;
        c = n % 10;
    }

    if (n == 0){
        cout << "munte" << endl;
    } else {
        cout << "nu e munte " << endl;
    }

    //cout << n << endl;






    return 0;
}
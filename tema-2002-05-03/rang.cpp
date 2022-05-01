#include <iostream>

using namespace std;

int main(){

    int n,k,c,r;

    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;

    r = 0; // rangul curent

    while (n != 0) {
        c = n % 10; 

        if (r == k) {
            cout << c << endl;
        }

        n = n / 10;
        r++;
    }
 
    return 0;
}
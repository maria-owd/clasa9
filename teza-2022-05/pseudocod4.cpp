#include <iostream>
using namespace std;
int main (){

    int n,s;

    cout << "n= ";
    cin >> n;
    s = -1;

    while (n > 0){
        if (n % 10 > s){
            s = n % 10;
        } else {
            s = 11;
        }
        n = n/10;
    }

    cout << s << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main (){

    int a, b, d;

    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    d = 1;

    for (int i=a; i >= 2; i--){
        if (a % i == 0 && b % i == 0){
           d = i;
           break;
        }
    }

    cout << "cmmdc este: " << d << endl;

    return 0;
}
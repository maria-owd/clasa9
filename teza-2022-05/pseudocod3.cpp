#include <iostream>
using namespace std;
int main (){

    int x,y,z;

    cout << "x= ";
    cin >> x;
    cout << "z= ";
    cin >> z;

    y = 0;

    while (x != 0){
        y = y*10 + x%10;
        x = x/100;
    }

    while (y*z > 0 && y%10 == z%10){
        y = y/10;
        z = z/10;
    }

    if (y + z == 0){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}
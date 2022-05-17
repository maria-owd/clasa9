#include <iostream>
using namespace std;
int main (){

    int n, oglinda, c, y, rang, p;

    n = 12345;
    oglinda = 0;
    y = 0;
    rang = 1;
    p = 1;

    while (n != 0){
        c = n % 10;
        oglinda = oglinda * 10 + c;
        if (c % 2 == 1){
            y = y + c * rang;
            rang = rang * 10;
            p = p * c;
        }
        n = n / 10; 
    }
    cout << y << endl;
    cout << oglinda << endl;
    cout << p << endl;



    return 0;
}





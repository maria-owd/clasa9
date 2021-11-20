#include <iostream>

using namespace std;

int main(){
    int a,b,p;
    float ma;

    cout << "primul numar este= ";
    cin >> a;

    cout << "al doilea numar este= ";
    cin >> b;

    if (a>b){
        ma = (a+b)/2.0;
        cout<< "media aritmetica este " << ma << endl;
    }

    if (a==b){
        p = a*b;
        cout << "produsul este " << p << endl;
    } else {
        cout << "primul numar este " << a << endl;
        cout << "al doilea numar este= " << b << endl;
    }

    return 0;
}



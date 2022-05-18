#include <iostream>
using namespace std;
int main (){

    int n, c, z, p, copieN;

    n = 103456;
    z = 0; // z este noul numar
    p = 1; // pozitia (unitati,zeci etc.)
    copieN = n;
    while (n > 0){
        c = n % 10;
        n = n / 10;

        if (c % 3 == 0){
            z = z + p * (9-c);
            p = p * 10;
        }
    }
    cout << "n: " << copieN << endl;
    cout << "z: " << z << endl;

    cout << ((z==963)?"OK":"Eroare!") << endl;
    return 0;
}
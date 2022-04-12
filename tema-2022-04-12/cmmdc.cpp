#include <iostream>

using namespace std;

/**
 * Determinarea cmmdc pentru mai multe numere
 */
int main (){
    int n, a, b;

    cout << "cate numere introduceti: ";
    cin >> n;
    
    cout << "introduceti un numar: ";
    cin >> a;
    
    while ( n > 1 ){
        cout << "introduceti un numar: ";
        cin >> b; 
    
        while( a != b ){

            // cmmdc(0,x) = x
            if (a == 0) { 
                a = b; 
            }
            if (b == 0) {
                b = a;
            }

            // algoritmul lui euclid pt. cmmdc
            if (a > b){
                a = a-b;
            } 
            if (b > a) {
                b = b-a;
            }
        }

        // a este cmmdc intermediar
        n--;
    }


    cout << "cel mai mare divizor comun este: " << a << endl;

    if (a==1){
        cout << "numerele sunt prime intre ele" << endl;
    }
}
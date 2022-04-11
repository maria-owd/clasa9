#include <iostream>

using namespace std;

/**
 * afisati nr obtinut dupa eiminarea tuturor cifrelor pare
 */

int main(){
    int n, c, x, pozitiaCifrei;
    
    cout << "n=";
    cin >> n;

    x = 0;
    pozitiaCifrei = 1;

    while (n!=0){
        c = n%10;
        if (c%2 != 0){
            x = c * pozitiaCifrei + x;
            pozitiaCifrei = pozitiaCifrei * 10;
        }

        n = n/10;
    }
    cout << x << endl;

    return 0;
}
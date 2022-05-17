#include <iostream>
using namespace std;
int main (){

    int n, numarDivizori, divizorMaxim;

    cout << "Alege un nr: ";
    cin >> n;

    divizorMaxim = 0;
    numarDivizori = 0;

    for (int i=2; i<=n/2; i++){
        if (n % i == 0){
            numarDivizori++;
            if (i % 3 == 0){
                if (i > divizorMaxim){
                    divizorMaxim = i;
                }
            } 
        }
    } 
    
    if (numarDivizori == 0){
        cout << "numarul e prim" << endl;
    } else{
        if (divizorMaxim == 0){
            cout << "nu e divizibil cu 3" << endl;
        } else {
            cout << divizorMaxim << endl;
        }
    }

    return 0;
}

    


#include <iostream>

using namespace std;

/**
 * se citesc n numere naturale
 * sa se calculeze suma numerelor prime si cifra maxima din toate numerele introduse 
 */

int main(){

    int n, c, a, numarDivizori, cifraMax, suma;

    cout << "Cate nr cititi: ";
    cin >> n;

    suma = 0;
    cifraMax = 0;

    for (int i=1; i<=n; i++){
        cout << "introduce nr " << i << ": ";
        cin >> a;
        numarDivizori = 0;

        for (int j=2; j<=a/2; j++){
            if (a % j == 0){
                numarDivizori++;
            }
        }

        if (numarDivizori == 0){
            cout << "nr prim" << endl;
            suma = suma + a;        
        }   

        while (a != 0){
            c = a % 10;
            
            if (c > cifraMax){
                cifraMax = c;
            }
            
            a = a/ 10;
        }
    } 

    cout << "suma e: " << suma << endl;
    cout << "cifra maxima e: " << cifraMax << endl;

    return 0;
}
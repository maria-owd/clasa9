#include <iostream>

using namespace std;

/**
 * se citeste un nr M, apoi
 * se citesc N numere naturale de la tastatura
 * se se afiseze media aritmetica a numerelor care au cel mai mare divizor divizibil cu M
 * 
 * ex:
 *      M = 6
 *      N = 5
 *               12, 15, 18, 10, 24 
 */
int main(){

    int m, n, a, divizorMax, numarNumere;
    float suma, media;

    cout << "m=";
    cin >> m;
    cout << "cate nr vrei sa citesti: ";
    cin >> n;
    suma = 0;
    numarNumere = 0;
    
    for (int i=1; i<=n; i++){
        cout << "introduce numarul " << i << ": ";
        cin >> a;
        divizorMax = 1;

        for (int j=2; j<=a/2; j++){
            if (a % j == 0){
                if (j > divizorMax){
                    divizorMax = j;
                }
            }
        }

        cout << "\t\t-div max: " << divizorMax << endl;

        if (divizorMax % m == 0){
            numarNumere++;
            suma = suma + a;
        }
    }

    media = suma / numarNumere;

    cout << "media e: " << media << endl;

    return 0;
}
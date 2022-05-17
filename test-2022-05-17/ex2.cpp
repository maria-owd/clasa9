#include <iostream>
using namespace std;
int main (){

    int n, s, numarDivizori, divizoriiSumei;

    cout << "Alege un nr: ";
    cin >> n;

    s = 0;
    numarDivizori = 0;
    
    for (int i=1; i<=n; i++){
        if (n % i == 0){
            s = s + i;
            numarDivizori++;
        }
    }

    cout << "suma divizorilor e: " << s << endl;

    divizoriiSumei = 0;

    for (int i=2; i<=s/2; i++){
        if (s % i == 0){
            divizoriiSumei++;
        }
    }

    if (divizoriiSumei == 0){
        cout << "suma divizorilor e nr prim: " << s << endl;
    } else{
        cout << numarDivizori << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int n, c, numarulCifrelor, ordinPrimaCifra, copieN, x;

    cout << "n=";
    cin >> n;
    copieN = n;

    // calculam numarul cifrelor si ordinul primei cifre
    numarulCifrelor = 0;
    ordinPrimaCifra = 1;

    while (n != 0) {
        numarulCifrelor++;
        ordinPrimaCifra = ordinPrimaCifra * 10;
        n = n / 10;
    }
    ordinPrimaCifra = ordinPrimaCifra / 10;

    //calculam toate combinatiile de atatea ori cate cifre are numarul

    n = copieN;
    while (numarulCifrelor > 0){

        // gasim ultima cifra din numarul curent
        while (n != 0) {
            c = n % 10;
            n = n / 10;
        }
        //mutam prima cifra in spatele numarlui
        x = copieN - c * ordinPrimaCifra; // numarul fara prima cifra
        n = x * 10 + c; // numarul schimbat
        copieN = n;
        
        cout << n << endl;

        numarulCifrelor--;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main(){

    int n, c, numarulCifrelor, numarulCifrelor2, ordinPrimaCifra;
    int copieN, origN, x, x1, copieNrCifre, y, n1, aparitii;

    cout << "n=";
    cin >> n;
    copieN = n;
    origN = n;

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
    copieNrCifre = numarulCifrelor;
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
        
        // verificam daca ultima cifra este diferita de prima cifra
        // verificam daca combinatia mai apare, 
        // adica calculam inca o data toate combinatiile
        aparitii = 0;
        numarulCifrelor2 = copieNrCifre;
        x = copieN;
        while (numarulCifrelor2 > 0 ){
            x1 = x;
            while (x != 0){
                c = x % 10;
                x = x / 10;
            }
            n1 = (x1 - c*ordinPrimaCifra)*10 + c;
            if (n1 == n){
                aparitii++;
            }
            x = n1;
            numarulCifrelor2--;
        }

        // afisam doar daca nr. nu mai apare si e diferit de cel original
        if (aparitii==1 && n!=origN){
            cout << n << endl;
        }
        

        copieN = n;
        numarulCifrelor--;
    }

    return 0;
}

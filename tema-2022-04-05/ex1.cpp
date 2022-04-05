#include <iostream>

using namespace std;
int main(){
    int n,c, numarulCifrelor, cifrePare, cifraMinima, aparitiiMinim;
    cout << "n=";
    cin >> n;
    cifrePare = 0;
    numarulCifrelor = 0;
    cifraMinima = 10;
    aparitiiMinim = 0; 

    while (n!=0){
        c = n%10;
        numarulCifrelor++;
        if (c%2==0){
            cifrePare++;
        }
        if (c < cifraMinima){
            cifraMinima = c;
            aparitiiMinim = 0;

        }
        if (c == cifraMinima){
            aparitiiMinim++;
        }
        n = n/10;
        
    }
    cout << "numarul cifrelor: " << numarulCifrelor << endl;
    cout << "numarul cifrelor pare: " << cifrePare << endl;
    cout << "cifra minima este: " << cifraMinima << " si apare de " << aparitiiMinim << " ori" << endl;

}
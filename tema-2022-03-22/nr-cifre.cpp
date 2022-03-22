#include <iostream>

using namespace std;


/** 
Se citește de la tastatură un număr natural nenul n. 
a) numarul de cifre
b) numarul de cifre pare. mesaj daca nu is
c) care ii cifra minima si de cate ori apare
*/
int main(){
    int n, nrCifre, c, cifrePare, cifraMinima, aparitii;
    
    //cout << "n=";
    //cin >> n;
    n = 7426258;

    // initializari
    nrCifre = 0; 
    cifrePare = 0;
    cifraMinima = 10;
    aparitii = 0;

    while (n!=0){
        
        c = n % 10;             // calculez cifra curenta
        
        if (c%2==0){            // cifra este para?
            cifrePare++;
        }
    
        if (c < cifraMinima){   
            cifraMinima = c;    // noul minim
            aparitii = 0;       // sterg nr de aparitii, pt. ca numara un nimim fals
        }
        
        if (cifraMinima == c){
            aparitii++;
        }

        // sfarsitul buclei, ne pregatim pentru urmatoarea cifra
        n = n / 10; // tai ultima cifra
        nrCifre++; // incrementez nr de cifre
    } 

    cout << "a. Nr de cifre este: " << nrCifre << endl;
    cout << "b. Nr de cifre pare este: " << cifrePare << endl;
    cout << "c. Cifra minima este: " << cifraMinima << " apare de: " << aparitii <<" ori" << endl ;


    return 0 ;
}
 

    




    
#include <iostream>
using namespace std;

int main (){

    int n, a, numarNumere, s, c,clonaA;
    float media;

    cout << "cate nr doresti sa citesti: ";
    cin >> n;
    
    s = 0;
    numarNumere = 0;


    for (int i=1; i<=n; i++){
        cout << "introduceti numarul " << i << ": ";
        cin >> a;
        clonaA = a;
        c = 1;
        while (a>0){
            c=a%10;
            a=a/10;
        }

        if (c%2==0){
            cout << clonaA << endl;
        } else {
            numarNumere++;
            s = s + clonaA;
        }
       
    }

    if (numarNumere>0){
        media = s / numarNumere;
        cout << "media: " << media << endl;
    } else {
        cout << "nu sunt numere" << endl;
    }

    return 0;
}



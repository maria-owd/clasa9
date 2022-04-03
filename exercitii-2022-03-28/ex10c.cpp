#include <iostream>

using namespace std; 

int main(){

    int n, ultimaCifra;
    n = 41234;

    cout << "n=" << n << endl;

    ultimaCifra = n%10; 

    //eliminam ultima cifra cat timp n nu e cifra
    
    while (n >= 10){
        n = n/10;
    }
    


   if(ultimaCifra==n){
        cout << "prima si ultima cifra sunt egale" << endl;
    } else {
        cout << "prima si ultima cifra nu sunt egale" << endl;
    }


return 0;

} 
#include <iostream>

using namespace std;


/** 
Sa se construiasca nr. cu diferanta panala la 9 a cifrelor divizibile cu 3 din acel nr.
273 - 6 ; 95016 - 93
*/


int main(){
    int n, c, p, nou, d;
    cout << "n=";
    cin >> n;

    p=1;
    nou=0;

    while(n!=0){
        c = n%10;
        n = n/10;
        if (c % 3 == 0){
            d = 9-c;
            nou = d * p + nou;
            p = p * 10;
        }
    }
     
     cout << nou << endl;

    return 0;
}
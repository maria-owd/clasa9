#include <iostream>

using namespace std;


/** 
 Citeste de la tatatura un nr. si determ. suma cifrelor pare ce formeaza acel nr. 
*/


int main(){
    int n, s=0, c;
    cout << "n=";
    cin >> n;

    s=0;

    while(n!=0){
        c = n%10;
        n = n/10;
        if(c%2==0){
            s += c;
        }
    }
    cout << s << endl;
    return 0;
}

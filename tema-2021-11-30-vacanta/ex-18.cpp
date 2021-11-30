#include <iostream>

using namespace std;


/** 
 * Se citește o valoare x număr natural. 
 * Să se scrie un algoritm care va afișa cele mai apropiate două
 * numere pare de numărul x. 
 * Exemplu: 
 *      Pentru x=14 se va afișa 12 și 16
 *      Pentru x=15 se va afișa 14 și 16.
*/


int main(){
    int x;
   
    cout << "x=";
    cin >> x;

    if (x%2==0){
        cout << x-2 << " " << x+2 << endl;
    } else{
        cout << x-1 << " " << x+1 << endl;
    }
    return 0;
}
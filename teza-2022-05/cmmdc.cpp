#include <iostream>

using namespace std;

/** cmmdc al lui a si b */

int main(){

    int a, b, maxim, divizorMax;
    cout << "a="; 
    cin >> a;
    cout << "b="; 
    cin >> b;
    divizorMax = 0;
    
    if (a > b){
        maxim = a;
    } else{
        maxim = b;
    }

    for (int i=2; i<=maxim/2; i++){
        if (a % i == 0 && b % i == 0){
            if (i > divizorMax){
                divizorMax = i;
            }
        }

    }
    cout << divizorMax << endl;

    return 0;
}

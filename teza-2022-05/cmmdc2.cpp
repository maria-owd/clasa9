#include <iostream>

using namespace std;

/** cmmdc al lui a si b */

int main(){

    int a, b;

    cout << "a="; 
    cin >> a;
    cout << "b="; 
    cin >> b;
    
    while (a != b){
        if (a > b){
            a = a-b;
        } else {
            b = b-a;
        }
    }

    cout << a << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main (){

    int n1, n2, s1, s2; 

    cout << "Alege un nr: ";
    cin >> n1;

    cout << "Mai alege un nr: ";
    cin >> n2;

    s1 = 1; // suma include divizorul 1

    for (int i=2; i<=n1/2; i++){
        if (n1 % i == 0){
            s1 = s1 + i;
        }
    }

    s2 = 1;

    for (int i=2; i<=n2/2; i++){
        if (n2 % i == 0){
            s2 = s2 + i;
        }
    }

    if (s1 == n2 && s2 == n1){
        cout << "prietene" << endl;
    } else{
        cout << "dusmani" << endl;
    }



}
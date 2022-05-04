#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "n=";
    cin >> n;

    for (int i=2; i<=n/2; i++){
        if (n % i == 0){
            cout << i << endl;
        }
    }

    cout << "--" << endl;

    for (int i=n/2; i>=2; i--){
        if (n % i == 0){
            cout << i << endl;
        }
    }
    return 0;
}
    
#include <iostream>

using namespace std;

int main(){
    
    int n,s,a;

    cout << "cate nr doriti sa cititi: " ;
    cin >> n;

    s = 0;

    while (n!=0){
        cout << "a=";
        cin >> a;
        s = s + a;
        n--;
    }
    cout << s<< endl;
    return 0;
}

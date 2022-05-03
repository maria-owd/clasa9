#include <iostream>

using namespace std;

int main(){
    
    int n,s,a,i;

    cout << "cate nr doriti sa cititi: " ;
    cin >> n;

    s = 0;
    i = 0;

    while (i < n) {
        cout << "introduceti nr " << i+1 << ": ";
        cin >> a;
        s = s + a;
        i++;
    }
    cout << s<< endl;
    return 0;
}

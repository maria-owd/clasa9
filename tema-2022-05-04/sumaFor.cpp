#include <iostream>

using namespace std;

int main(){
    
    int n,s,a,i;

    cout << "cate nr doriti sa cititi: " ;
    cin >> n;

    s = 0;
    
    for (i=0; i<n; i++){
        cout << "introduceti nr " << i+1 << ": ";
        cin >> a;
        s = s + a;
    }
    cout << s<< endl;
    return 0;
}

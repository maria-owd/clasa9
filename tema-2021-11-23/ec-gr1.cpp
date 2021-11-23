#include <iostream>

using namespace std;

int main(){
    float a,b,x;
     
     cout <<"ecua'ie de gradul I de forma a*x+b=0" << endl;
    cout << "primul coeficient este= ";
    cin >> a;

    if(a==0){
        cout << "eroare, nu e ecuatie de gardul I" << endl;
        return 1;
    }

    cout << "al doilea coeficient este= ";
    cin >> b;
    

    x = - b/a; 
    cout << "solutia este x=" << x << endl;
    
    
    return 0;

}
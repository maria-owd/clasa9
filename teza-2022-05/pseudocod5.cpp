#include <iostream>

int main(){

    int n, k, nr, p;

    std::cout << "n="; std::cin >> n;
    std::cout << "k="; std::cin >> k;
    
    nr = 0;
    p = 1;

    while (n != 0 && k != 0){
        if (n % 2 == 0){
            nr += (n % 10) * p;
            p *= 10;
        } else {
            k--;
        }
        n /= 10;
    }

    std::cout << "nr=" << nr << std::endl; 
}
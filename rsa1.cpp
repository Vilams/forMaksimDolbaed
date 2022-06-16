#include <iostream>
#include <fstream>
#include<math.h>
#include <typeinfo>


using namespace std;
// find gcd
int gcd(int a, int b) {
    int t;
    while (1) {
        t = a % b;
        if (t == 0)
            return b;
        a = b;
        b = t;
    }
}
int main() {
    ifstream f1("input.txt");
    ofstream f2("output.txt");
    double p = 43;
    double q = 61;
    double n = p * q;
    double track;
    double phi = (p - 1) * (q - 1);
    //public key
    
    double e = 5;

    //for checking that 1 < e < phi(n) and gcd(e, phi(n)) = 1; i.e., e and phi(n) are coprime.
    while (e < phi) {
        track = gcd(e, phi);
        if (track == 1)
            break;
        else
            e++;
    }
    //private key
    //d stands for decrypt
    //choosing d such that it satisfies d*e = 1 mod phi
    double d1 = 1 / e;
    double d = fmod(d1, phi);
    double message;
    f1 >> message;
     std::cout<<typeid(message)<< "\n" ;
    double c = pow(message, e);
     std::cout<<d<< "\n" ; //encrypt the message
    double m = pow(c, d);
     std::cout<<c << m<< "\n" ;
    c = fmod(c, n);
    m = fmod(m, n);
   
    std::cout<<c << m;
    return 0;
}

//TLE error

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int a;
    while (cin >>a ) {
        string s="質數";
        for (int i=2; i<=(int)sqrt(a); i++) {
            if (a%i==0) {
                s="非質數";
                break;
            }
        }
        cout << s <<endl;
    }
    return 0;
}


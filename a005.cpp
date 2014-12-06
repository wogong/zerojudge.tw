#include<iostream>
using namespace std;

int main() {
    int n,a,b,c,d,e;
    string s=" ";
    while(cin >> n) {
        while(n--) {
            cin >> a >> b >> c >>d;
            if (b-a==c-b)
                e = d+b-a;
            else
                e = d*(b/a);
            cout << a <<s<< b <<s<< c <<s<< d <<s<< e << endl;
        }
    }
    return 0;
}


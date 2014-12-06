#include<iostream>
#include<math.h>
using namespace std;
int main() {
    double a,b,c;
    double d,x1,x2;
    while(cin>>a>>b>>c) {
        d = b*b-4*a*c;
        if (d<0)
            cout <<"No real root" <<endl;
        else if (d==0) {
            x1 = -b/(2*a);
            cout <<"Two same roots x="<<(x1==0?-x1:x1)<<endl;
        }
        else {
            x1 = (-b+sqrt(d))/(2*a);
            x2 = (-b-sqrt(d))/(2*a);
            cout <<"Two different roots x1="<<x1<<" , x2="<<x2<<endl;
        }
    }
    return 0;
}


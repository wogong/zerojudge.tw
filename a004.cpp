#include<iostream>
using namespace std;

int main() {
    int y;
    string s;
    while(cin >> y) {
        s = "平年";
        if (y%4==0 && y%100 != 0)
            s = "閏年";
        else if (y%400 == 0)
            s = "閏年";
        cout << s << endl;
    }
    return 0;
}


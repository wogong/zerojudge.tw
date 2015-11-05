/*
author: wogong(i@wogong.net)
create: 2014-12-06
update: 2014-12-06
note: k=7
*/

#include<iostream>
using namespace std;

int main()
{
    char c;
    while(cin.get(c))
    {
        if ((int)c!=10)
        {
            cout << (char)((int)c-7);
        }else
        {
            cout << endl;
        }
    }
    return 0;
}


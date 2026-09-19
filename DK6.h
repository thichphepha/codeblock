#pragma once
using namespace std;
inline void DK6()
{
    int a;
    cin >> a;
    if (a % 2 == 0) cout << "yes" << endl;
    else cout << "no" << endl ;
    if (a % 10 == 0) cout << "yes" << endl ;
    else cout << "no" << endl ;
    if (a >= 1000 && a <=9999) cout <<  "yes"<< endl;
    else cout << "no"<< endl;
}

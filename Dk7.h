#pragma once
using namespace std;
inline void DK7()
{
    int a,b;
    cin >> a >> b;
    if (a % b == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    if (a * b < 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}

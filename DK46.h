#pragma once
using namespace std;
inline void DK46()
{
    int n,m,a,b,c,th = 0;
    cin >> n >> m >> a >> b >> c;
    if (a - n < 0) th += abs(a - n);
    if (b - m < 0) th += abs(b - m);
    if (th > 0 && th - c > 0) cout << th -c;
    else cout << 0;
}

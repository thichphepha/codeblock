#pragma once
using namespace std;
inline void DK3()
{
    set<long long> s;
    long long x;
    for (int i = 1 ; i <= 4 ; i++)
    {
        cin >> x;
        s.insert(x);
    }
    cout << *s.begin() << " " << *s.rbegin();

}

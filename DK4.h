#pragma once
using namespace std;
inline void DK4()
{
    int bac,nam;
    cin >> bac >> nam;
    if (nam - bac > 0) cout << "NAM";
    else if (nam - bac == 0) cout << "HOA";
    else cout << "BAC";
}

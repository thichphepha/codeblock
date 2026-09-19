#pragma once
using namespace std;
inline void phanloai()
{
    int cam,ang;
    bool co;
    cin >> cam >> ang;
    if (cam >= 3 && ang <= 4) {cout << "1 " ; co = true; }
    if (cam <=6 && ang >=2) {cout << "2 "; co = true; }
    if (cam <=2 && ang <= 3) {cout << "3 "; co = true; }
    if (!co) cout << '0';
}

#pragma once
using namespace std;
inline void marisa_38()
{
    int n,m;
    cin >> n >> m;
    int a[m+7] ={};
    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < m ;j++) {
            int x;
            cin >> x;
            a[j] += x;
        }
    }
    for (int i = 0 ; i < m ;i++) {
        cout << a[i] << " ";
    }
}

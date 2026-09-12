#pragma once
using namespace std;
inline int somayman(int p,int q,int k)
{
    int m,ans,temp;
    for (int i = p; i <= q ; i++) {
        m = 0;
        temp = i;
        while (temp) {
            m += temp % 10;
            temp/=10;
        }
        if (m % k == 0) ans++;
    }
    return ans;
}

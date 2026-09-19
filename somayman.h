#pragma once
using namespace std;
inline int somayman(int p,int q,int k)
{
    int m= 0,temp = p,ans = 0;
    while(temp)
    {
        m += temp%10;
        temp/=10;
    }
    cout << m << endl;
    for (int i = p ; i <= q ; i++) {
        if (i % 10 == 0) m -= 8;
        else m += 1;
        if (m % k == 0) ans+=1;
    }
    return ans;
}

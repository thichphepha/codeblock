#pragma once
inline void marisa_40()
{
    int n ,a[1000][1000];
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        for (int j = min(a,c) ; j <= max(a,c) ; j++)
        {
            for (int k = min(b,d) ; k <= max(b,d) ; k++)
            {
                a[j][k] = 1;
            }
        }
    }
    int ans = 0;
    for (int i = 1 ; i < 100 ; i++)
    {
        for (int j = 1 ; i <= 100 ; j++)
        {
            if (a[i][j] == 1) ans++;
        }
    }
    cout << ans;
}

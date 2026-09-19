#pragma once
inline void marisa_39()
{
    int n , m , x , y;
    cin >> n >> m >> x >> y;

    vector<vector<int> > v(n,vector<int>(m));

    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            cin >> v[i][j];
        }
    }

    int ans = 0;
    x--,y--;

    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            if (abs(i-x) == abs(j-y))
            {
                ans += v[i][j];
            }
        }
    }
    cout << ans;
}

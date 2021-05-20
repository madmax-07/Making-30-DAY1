#include <bits/stdc++.h>
using namespace std;
int main()
{

    int k, l, m, n, d, count = 0;
    cin >> k >> l >> m >> n >> d;
    vector<int> v(d + 1,0);
   
    for (int i = k; i < v.size(); i = i + k)
    {
        if (v[i] == 0)
            v[i] = 1;
    }
    for (int i = l; i < v.size(); i = i + l)
    {
        if (v[i] == 0)
            v[i] = 1;
    }
    for (int i = m; i < v.size(); i = i + m)
    {
        if (v[i] == 0)
            v[i] = 1;
    }
    for (int i = n; i < v.size(); i = i + n)
    {
        if (v[i] == 0)
            v[i] = 1;
    }
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == 1)
            count++;
    }
    cout << count << endl;
}
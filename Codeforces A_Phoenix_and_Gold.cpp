#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sum = accumulate(v.begin(), v.end(), sum);
        if (sum == x)
        {
            cout << "NO" << endl;
            
        }
        else
        {
            cout << "YES" << endl;
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                count += v[i];
                if (count == x)
                {
                    swap(v[i], v[i + 1]);
                    count = count - v[i + 1] + v[i];
                }
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}

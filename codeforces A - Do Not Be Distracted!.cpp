#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int i = 0;
        int count[26] = {0};
        for (; i < n;)
        {
            int id = a[i] - 'A';
            if (count[id] == 0)
            {
                int j = i + 1;
                while (j < n and a[j] == a[i])
                    j++;
                count[id] = 1;
                i = j;
            }
            else
                break;
        }
        if (i == n)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
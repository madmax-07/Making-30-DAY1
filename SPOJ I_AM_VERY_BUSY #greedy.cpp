#include <bits/stdc++.h>
using namespace std;
 
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s, e;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> e;
            v.push_back(make_pair(s, e));
        }
        // soriting the activities according to jiska kam end time h 
        //so the greedy approach here is that we can add or do more activities
        sort(v.begin(), v.end(), compare);
        //ACtivity seclection algorithm
        int count = 1;
        int fin = v[0].second;
        //start picking up activities
        for (int i = 1; i < n; i++)
        {
            if (v[i].first >= fin)
            {
                fin = v[i].second;
                count++;
            }
        }
        cout << count << endl;
        }
    return 0;
}

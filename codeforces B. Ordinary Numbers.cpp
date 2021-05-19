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
        int no_digits = (floor(log10(n) + 1) - 1)*9;
        string str = to_string(n);
        string s = "";
        for (int i = 0; i < str.length(); i++)
        {
            s += str[0];
        }
        int num = stoi(s);
        if (num <= n)
        {
            no_digits += s[0] - '0';
        }
        else
            no_digits += (s[0] - '0') - 1;
        cout << no_digits<<endl;
    }
}
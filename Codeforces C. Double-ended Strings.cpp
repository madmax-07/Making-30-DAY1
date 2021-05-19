#include <bits/stdc++.h>
using namespace std;
int longest_commonsub(string s1, string s2)
{ //s1 is the smarller string & s2 is the larger string
    int max_len = INT_MIN;
    for (int i = 0; i < s1.length(); i++)
    {      
        int j = i;
        string str="";
         str += s1[j];
        while (s2.find(str) != -1)
        {
            int len = j - i + 1;
            max_len = max(max_len, len);
            str += s1[++j];
        }
    }
    if (max_len != INT_MIN)
        return max_len;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string str1 = s1.length() <= s2.length() ? s1 : s2; //the samller one is str1;
        string str2 = s1.length() > s2.length() ? s1 : s2; //the bigger string is str2
        int len = longest_commonsub(str1, str2);
        cout << s1.length() + s2.length() - (2 * len) << endl;
    }
}
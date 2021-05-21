#include <bits/stdc++.h>
using namespace std;
bool is_perfect_square(int n)
{
    int y = sqrt(n);
    return y * y == n;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0 and is_perfect_square(n / 2))
            cout << "YES" << endl;
        else if (n % 4 == 0 and is_perfect_square(n / 4))
            cout << "YES" << endl;
        else
            cout << "NO"<<endl;
    }
}

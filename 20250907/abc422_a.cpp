#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

void init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
}

int main()
{
    init();

    string s;
    cin >> s;

    char i = s.at(0);
    char j = s.at(2);

    if (j == '8')
    {
        i = s.at(0);
        i++;
        j = '1';

        cout << i << "-" << j << endl;

        return 0;
    }

    j++;
    cout << i << "-" << j << endl;

    return 0;
}

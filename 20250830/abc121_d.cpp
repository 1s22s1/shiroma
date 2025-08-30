#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

ll sum_xor(ll n)
{
    if (n % 2 == 1)
    {
        return (n + 1) / 2 % 2;
    }
    else
    {
        return (n + 2) / 2 % 2 ^ (n + 1);
    }
}

int main()
{
    init();

    ll A, B;
    cin >> A >> B;

    cout << (sum_xor(B) ^ sum_xor(A - 1)) << endl;

    return 0;
}

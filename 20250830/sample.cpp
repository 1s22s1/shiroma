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

ll xor_even_sum(ll n)
{
    if ((n / 2) % 2 == 0)
    {
        return n;
    }
    else
    {
        return 1 ^ n;
    }
}

ll xor_sum(ll n)
{
    if (n % 2 == 0)
    {
        return xor_even_sum(n);
    }
    else
    {
        return n ^ xor_even_sum(n - 1);
    }
}

int main()
{
    init();

    ll A, B;
    cin >> A >> B;

    cout << (xor_sum(A - 1) ^ xor_sum(B)) << endl;

    return 0;
}

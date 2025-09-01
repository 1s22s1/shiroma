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

ll sum_even_xor(ll n)
{
    if (n / 2 % 2 == 0)
    {
        return n;
    }
    else
    {
        return 1LL ^ n;
    }
}

ll sum_xor(ll n)
{
    if (n % 2 == 0)
    {
        return sum_even_xor(n);
    }
    else
    {
        return sum_even_xor(n - 1) ^ n;
    }
}

int main()
{
    init();

    ll A, B;
    cin >> A >> B;

    cout << (sum_xor(A - 1) ^ sum_xor(B)) << endl;

    return 0;
}

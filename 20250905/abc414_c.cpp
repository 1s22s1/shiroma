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

bool is_palindromi(ll n, ll base)
{
    vector<ll> vec;
    while (n > 0)
    {
        vec.emplace_back(n % base);
        n /= base;
    }

    rep(i, vec.size() / 2)
    {
        if (vec.at(i) != vec.at(vec.size() - i - 1))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    init();

    ll A, N;
    cin >> A >> N;

    vector<ll> vec;

    for (ll i = 1; i <= to_string(N).size(); i++)
    {
        if (i == 1)
        {
            for (ll j = 1; j <= 9; j++)
            {
                if (j <= N)
                {
                    vec.emplace_back(j);
                }
            }
        }
        else if (i % 2 == 0)
        {
            ll half_digit = i / 2;
            for (ll j = (ll)pow(10, half_digit - 1); j <= (ll)pow(10, half_digit) - 1; j++)
            {
                string s = to_string(j);
                string t = s;
                reverse(t.begin(), t.end());

                ll num = stoll(s + t);
                if (num <= N)
                {
                    vec.emplace_back(num);
                }
            }
        }
        else
        {
            ll half_digit = i / 2;
            for (ll j = (ll)pow(10, half_digit - 1); j <= (ll)pow(10, half_digit) - 1; j++)
            {
                string s = to_string(j);
                string t = s;
                reverse(t.begin(), t.end());

                for (char c = '0'; c <= '9'; c++)
                {
                    ll num = stoll(s + c + t);
                    if (num <= N)
                    {
                        vec.emplace_back(num);
                    }
                }
            }
        }
    }

    ll sum = 0;
    for (auto a : vec)
    {
        if (is_palindromi(a, A))
        {
            sum += a;
        }
    }

    cout << sum << endl;

    return 0;
}

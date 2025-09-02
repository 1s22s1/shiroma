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

bool is_balindromic(ll value, ll base)
{
    vector<ll> digit_vector;
    while (value > 0)
    {
        digit_vector.emplace_back(value % base);
        value /= base;
    }

    bool ok = true;
    rep(i, digit_vector.size() / 2)
    {
        if (digit_vector.at(i) != digit_vector.at(digit_vector.size() - i - 1))
        {
            ok = false;
        }
    }

    return ok;
}

int main()
{
    init();

    ll A, N;
    cin >> A >> N;

    ll digit_length = to_string(N).size();
    vector<ll> palindromic_vector;

    for (ll i = 1; i <= digit_length; i++)
    {
        if (i == 1)
        {
            for (ll i = 1; i <= 9; i++)
            {
                if (i <= N)
                {
                    palindromic_vector.emplace_back(i);
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

                ll value = stoll(s + t);
                if (value <= N)
                {
                    palindromic_vector.emplace_back(value);
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
                    ll value = stoll(s + c + t);
                    if (value <= N)
                    {
                        palindromic_vector.emplace_back(value);
                    }
                }
            }
        }
    }

    ll answer = 0;
    for (auto a : palindromic_vector)
    {
        if (is_balindromic(a, A))
        {
            answer += a;
        }
    }

    cout << answer << endl;

    return 0;
}

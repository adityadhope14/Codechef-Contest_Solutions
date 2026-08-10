

/*
===============================================================================
                    COMPETITIVE PROGRAMMING TEMPLATE
===============================================================================

Author : Aditya Dhope

Current Goals
-------------
- Reach Specialist (1400+) on Codeforces.
- Reach 4-Star on CodeChef.
- Solve 2500+ DSA & Competitive Programming problems.
- Qualify for ICPC Regionals.
- Crack Google, Microsoft, Atlassian, Uber Internship 2027.

"Small improvements every day lead to extraordinary results."

"Consistency beats intensity."


"Dream -> Practice -> Contest -> Upsolve -> Repeat."

Reminder
--------
- Think before coding.
- Read the statement twice.
- Handle edge cases.
- Dry run sample test cases.
- Watch for integer overflow.
- Keep the solution simple.
- Never give up after one Wrong Answer.
- Learn something from every contest.

Contest Checklist
-----------------
[ ] Read the entire problem carefully.
[ ] Check constraints.
[ ] Decide the algorithm first.
[ ] Estimate time complexity.
[ ] Code carefully.
[ ] Test custom cases.
[ ] Submit confidently.
[ ] Upsolve after the contest.

===============================================================================
*/

#include <bits/stdc++.h>
using namespace std;

// -------------------- Type Definitions --------------------
using ll = long long;
using ld = long double;
using ull = unsigned long long;

// -------------------- Macros --------------------
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

// -------------------- Constants --------------------
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const ll INF = 1e18;
const int INF_INT = 1e9;

// -------------------- Fast I/O --------------------
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// -------------------- Debug --------------------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

// -------------------- Utility Functions --------------------

// Greatest Common Divisor
ll gcd(ll a, ll b) {
    return (b == 0) ? a : gcd(b, a % b);
}

// Least Common Multiple
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

// Binary Exponentiation
ll power(ll a, ll b) {
    ll ans = 1;

    while (b) {
        if (b & 1)
            ans *= a;

        a *= a;
        b >>= 1;
    }

    return ans;
}

// Modular Binary Exponentiation
ll modPower(ll a, ll b, ll mod = MOD) {
    ll ans = 1;
    a %= mod;

    while (b) {
        if (b & 1)
            ans = (ans * a) % mod;

        a = (a * a) % mod;
        b >>= 1;
    }

    return ans;
}

// -------------------- Direction Arrays --------------------
int dx4[] = {-1, 0, 1, 0};
int dy4[] = {0, 1, 0, -1};

int dx8[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy8[] = {-1, 0, 1, -1, 1, -1, 0, 1};

// -------------------- Solve Function --------------------
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int valid_ways = 0;
    string possible_starts[4] = {"00", "01", "10", "11"};
    for (int k = 0; k < 4; k++) {
        string current_start = possible_starts[k];
        string implied_string = "";
        if (n >= 1) implied_string += current_start[0];
        if (n >= 2) implied_string += current_start[1];
        for (int i = 2; i < n; i++) {
            char previous = implied_string[i - 2];
            if (previous == '0') {
                implied_string += '1';
            } else {
                implied_string += '0';
            }
        }
        bool is_match = true;
        for (int i = 0; i < n; i++) {
            if (s[i] != '?' && s[i] != implied_string[i]) {
                is_match = false;
                break;
            }
        }
        if (is_match) {
            valid_ways++;
        }
    }
    cout << valid_ways << endl;
}
// -------------------- Main Function --------------------
int main() {

    fastIO();

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

/*
===============================================================================

Code. Debug. Learn. Repeat.

"The rating follows the learning, not the other way around."

Current Mission
---------------
Codeforces : Specialist
CodeChef   : 4-Star
ICPC        : Regionalist
===============================================================================
*/
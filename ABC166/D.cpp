/**
 *    author:  ytsmash
 *    created: 17.10.2021 11:06:42
 **/

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

typedef long long ll;
typedef long double ld;
struct edge { int to, cost; };
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
const long double EPS = 1e-10;
const ll INF = 1e18;
const long double PI = acos(-1.0L);
using P = pair<int, int>;
vector<int> devisor(int num) { vector<int> ret; for (int i = 1; i * i <= num; i++) { if (num % i == 0) { ret.push_back(i); if (i * i != num) { ret.push_back(num / i); } } } sort(ret.begin(), ret.end()); return ret; }
vector<pair<ll, ll>> prime_factorize(ll N) { vector<pair<ll, ll>> res; for (ll a = 2; a * a <= N; ++a) { if (N % a != 0) continue; ll ex = 0; while (N % a == 0) { ++ex; N /= a; } res.push_back({a, ex}); } if (N != 1) res.push_back({N, 1}); return res; }
ll gcd(ll x, ll y) { if (y == 0) return x; else return gcd(y, x % y); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
    ll X;
    cin >> X;

    for (ll i = 0; i < 10000; i++) {
        ll c = X - i * i * i * i * i;
        for (ll j = 0; j < 10000; j++) {
            if (abs(c) == abs(j * j * j * j * j)) {
                if (c < 0) cout << i << " " << j << endl;
                else cout << i << " " << -j << endl;
                return 0;
            }
        }
    }
    return 0;
}
/**
 *    author:  ytsmash
 *    created: 22.08.2021 09:04:46
 **/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
template <class T>
bool chmax(T& a, const T& b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T& a, const T& b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}
const long double EPS = 1e-10;
const long long INF = 1e18;
const long double PI = acos(-1.0L);
using P = pair<int, int>;

int main() {
    ll A, B, K;
    cin >> A >> B >> K;
    string S;
    S.resize(A + B);
    rep(i, A) { S[i] = 'a'; }
    for (int i = A; i < A + B; i++) {
        S[i] = 'b';
    }
    for (ll i = 0; i < K - 1; i++) {
        next_permutation(all(S));
    }
    cout << S << "\n";
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
// Big two primes
 
#define X 1001100011100001111ll
 
#define mod 1000000007
 
#define int long long
 
#define ll long long
 
#define all(a) a.begin(),a.end()
 
#define sortall(a) sort(all(a))
 
#define fo(i, n) for (int i = 0; i < n; i++)
 
#define fo1(i, n) for (int i = 1; i <= n; i++)
 
#define loop(i,a,b) for (int i = a; i < b; i++)
 
#define nloop(i,a,b) for (int i = a ; i>=b;i--)
 
#define tc(t) int t; cin >> t; while (t--)
 
#define arrip(a,n) int a[n]; fo(i, n) cin >> a[i];
 
#define arrop(a,n) fo(i,n) cout<<a[i]<<" ";
 
#define pb push_back
 
#define mp make_pair
 
#define itr(it, a) for(auto it = a.begin(); it != a.end(); it++)
 
#define PI 3.1415926535897932384626
 
 
 
 
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
 
#define rr return 0
 
#define prec(n) fixed<<setprecision(n)
 
#define maxpq priority_queue<int>
 
#define minpq priority_queue<int, vector<int>, greater<int> >
 
#define inf (int)(1e18)
 
#define ini(a, i) memset(a, i, sizeof(a))
 
#define vi vector<int>
 
#define fi first
 
#define se second
 
#define endl "\n"
 
#define pi pair<int, int>
 
#define vpi vector<pi>
 
#define sz(s) s.size()
 
#define bits(n) __builtin_popcount(n)
 
//const int MAXN = (int)((1e5) +` 100);
 
//int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
 
int max(int a, int b) {if (a > b) return a; else return b;}
 
int min(int a, int b) {if (a < b) return a; else return b;}
 
 
 
 
void solve() {
 
 
 
 
    int n; cin >> n;
 
    string s;
 
    cin >> s;
 
    //int n=s.length();
 
    bool f = true;
 
 
 
 
    fo(i, n - 1) {
 
        if (s[i] == 'H') {
 
            if (s[i] == s[i + 1]) {
 
                f = false;
 
            }
 
        }
 
    }
 
    if (!f)cout << "NO" << endl;
 
    else {
 
 
 
 
        fo(i, n) {
 
            if (s[i] == '.') {
 
                s[i] = 'B';
 
            }
 
        }
 
        cout << "YES" << endl;
 
        cout << s << endl;
 
    }
 
}
 
int32_t main()
 
{
 
    fio;
 
#ifndef ONLINE_JUDGE
 
    freopen("ci.txt", "r", stdin);
 
    freopen("co.txt", "w", stdout);
 
#endif
 
 
 
 
    //tc(t)
 
    solve();
 
}

#include <bits/stdc++.h>
//#include <ext/rope>
 
using namespace std;
//using namespace __gnu_cxx;
 
#define ffor(i,o,f)        for(int i = o; i < f; i++)
#define bfor(i,f,o)        for(int i = f; i >= o; i--)
#define pb                 push_back
#define pf                 push_front
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
#define PI                 acos(-1)
#define endl               '\n'
#define lcm(a,b)           (a*b)/__gcd(a,b)
#define mem(a, h)          memset(a, (h), sizeof(a))
#define setp(a)            fixed << setprecision(a)
typedef long long          ll;
typedef long double        ld;  
typedef pair < ll, ll >    pll;
typedef vector < ll >      vll;
const int INF = int(1e9 + 7);
const int MOD = 998244353;
const double EPS = double(1e-9);
const int TAM = 200005;

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n, m, k, p, a;
    vll v;
    map<ll, vll> mp;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> a, v.pb(a);
        mp[a].pb(i);
    }
    sort(all(v));
    reverse(all(v));
    cin >> m;
    while(m--){
        map<ll, ll> c;
        cin >> k >> p;
        p--;
        vector<pll> va;
        ffor(i, 0, k){
            va.pb({mp[v[i]][c[v[i]]], v[i]});
            c[v[i]]++;
        }
        sort(all(va));
        cout << va[p].S << endl;
    }
    return 0;
}
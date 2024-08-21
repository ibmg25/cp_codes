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

ll n, h, a;
vll v;

bool ok(ll t){
    vll aux;
    ffor(i, 0, t) aux.pb(v[i]);
    sort(all(aux));
    reverse(all(aux));
    ll tot = 0;
    for(ll i = 0; i < t; i+=2) tot += aux[i];
    if(tot <= h) return true;
    return false;
}


int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    cin >> n >> h;
    ffor(i, 0, n) cin >> a, v.pb(a);
    ll lo = 1, hi = n, mid, r = 0;
    while(lo <= hi){
        mid = (lo + hi) / 2;
        if(ok(mid)) r = mid, lo = mid + 1;
        else hi = mid - 1;
    }
    cout << r << endl;
    return 0;
}
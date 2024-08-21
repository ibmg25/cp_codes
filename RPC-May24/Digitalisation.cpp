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
    ll n, m, c, a, b, p1 = 0, p2 = 0;
    vector<pll> v;
    map<ll, ll> mp;
    cin >> n >> m >> c;
    ffor(i, 0, n){
        cin >> a >> b;
        v.pb({a, b});
    }
    ffor(i, 0, n){
        if(mp[v[i].F] < c) mp[v[i].F]++, p1++;
        else if (mp[v[i].S] < c) mp[v[i].S]++, p2++;
    }
    cout << p1 << " " << p2 << endl;
    return 0;
}
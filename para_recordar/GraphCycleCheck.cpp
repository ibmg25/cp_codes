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

vector<vll> g;
map<string, ll> m;
ll n, id = 1;
string a, b;
bool vis[5005], vis2[5005];
bool ok;

void cycle(ll nd){
    if(vis2[nd]) ok = true;
    if(vis[nd]) return;
    vis[nd] = 1;
    vis2[nd] = 1;
    ffor(i, 0, g[nd].size()){
        cycle(g[nd][i]);
    }
    vis2[nd] = false;
}

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    cin >> n;
    g.assign(n+5, vll());
    ffor(i, 0, n){
        cin >> a >> b;
        if(m[a] == 0) m[a] = id, id++;
        if(m[b] == 0) m[b] = id, id++;
        g[m[a]].pb(m[b]);
    }
    while(cin >> a){
        mem(vis, false);
        mem(vis2, false);
        ok = false;
        cycle(m[a]);
        if (ok) cout << a << " safe" << endl;
        else cout << a << " trapped" << endl; 
    }
    return 0;
}
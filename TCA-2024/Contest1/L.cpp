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

vector<vll > g;
bool vis[200005];
int flag[200005];
bool ok = true;
vector<pll> ed;

void init(){
    ffor(i, 0, 200005)
        vis[i] = false, flag[i] = -1;
    g.assign(200005, vll());

}

void dfs(ll ni, ll f){
    if(vis[ni]) return;
    vis[ni] = true;
    ffor(i, 0, g[ni].size()){
        if(flag[g[ni][i]] != -1 && flag[g[ni][i]] != f){
            ok = false;
            return;
        }
        else{ 
            flag[g[ni][i]] = f;
            dfs(g[ni][i], (f+1)%2);
        }
    }
}

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n, m, u, v;
    cin >> n >> m;
    init();
    ffor(i, 0, m){
        cin >> u >> v;
        ed.pb({u, v});
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    if(!ok) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        ffor(i, 0, ed.size()){
            cout << flag[ed[i].F];
        }
    }
    return 0;
}
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

ll n, m, d, u, v;
vector<vll > g;
ll uf[200005], ta[200005];
vll v1;
bool vis[200005];

void init(){
    g.assign(200005, vll());
    ffor(i, 0, 200003) uf[i] = i, ta[i] = 1, vis[i] = false;
}

ll Find(ll a){
    if(uf[a] == a) return a;
    return uf[a] = Find(uf[a]);
}

void Union(ll a, ll b){
    ll A = Find(a);
    ll B = Find(b);
    if(A != B) uf[A] = uf[B], ta[B] += ta[A], ta[A] = 0;
}

void bfs(ll ni){
    queue<ll> q;
    vis[ni] = true;
    q.push(ni);
    while(!q.empty()){
        ll nd = q.front();
        q.pop();
        ffor(i, 0, g[nd].size()){
            if(vis[g[nd][i]]) continue;
            vis[g[nd][i]] = true;
            cout << nd << " " << g[nd][i] << endl;
            q.push(g[nd][i]);
        }
    }
}

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    set<ll> st;
    cin >> n >> m >> d;
    init();
    ffor(i, 0, m){
        cin >> u >> v;
        if(v < u) swap(u, v);
        if(u != 1 && v != 1){
            g[u].pb(v);
            g[v].pb(u);
            Union(u, v);
        }
        else if(u == 1) v1.pb(v);
        else if(v == 1) v1.pb(u); 
    }
    if(d > v1.size()) cout << "NO" << endl;
    else{
        ll c = 0;
        ffor(i, 2, n+1){
            if(ta[i] > 0) c++;
        }
        if(c > d) cout << "NO" << endl;
        else{ 
            sort(all(v1));
            cout << "YES" << endl;
            ll aux = d - c;
            ffor(i, 0, v1.size()){
                if(!st.count(Find(v1[i]))){
                    g[1].pb(v1[i]);
                    g[v1[i]].pb(1);
                    st.insert(Find(v1[i]));
                }else if(aux > 0){
                    g[1].pb(v1[i]);
                    g[v1[i]].pb(1);
                    aux--;
                }
            }
        }
        bfs(1);
    }
    return 0;
}
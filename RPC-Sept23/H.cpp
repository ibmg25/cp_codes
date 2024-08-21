#include <bits/stdc++.h>
//#include <ext/rope>
 
using namespace std;
//using namespace __gnu_cxx;
 
#define ffor(i,o,f)        for(int i = o; i < f; i++)
#define bfor(i,f,o)        for(int i = f; i >= o, i--)
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
typedef pair < int, int >  pii;
typedef pair < ll, ll >    pll;
typedef vector < int >     vi;
typedef vector < pii >     vii;
typedef vector < vi >      gi;
typedef vector < ll >      vll;
typedef map < int, int >   mii;
const int INF = int(1e9 + 7);
const int MOD = 998244353;
const double EPS = double(1e-9);
const int tam = 200005;

const int MAX = 1e6+7;

int t[4*MAX];

int query(int v, int tl, int tr, int l, int r){
    if(l > r) return 0;
    if(l == tl && r == tr) return t[v];
    int tm = (tl+tr)/2;
    int nodeL = query(v*2, tl, tm, l, min(r, tm));
    int nodeR = query(v*2+1, tm+1, tr, max(l, tm+1), r);
    return nodeL+nodeR;
}

void update(int v, int tl, int tr, int pos, int new_val){
    if(tl == tr) t[v] = new_val;
    else{
        int tm = (tl+tr)/2;
        if(pos <= tm) update(v*2, tl, tm, pos, new_val);
        else update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2]+t[v*2+1];
    }
}

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    
    //for(int i  =0; i < 4*MAX; i++) t[i] = 0;
    mem(t, 0);

    int n; cin >> n;

    ll inv = 0;

    int e;

    for(int i = 0; i < n; i++){
        cin >> e;
        inv += query(1, 0, 1e6, e, 1e6);
        update(1, 0, 1e6, e, 1);
    }

    if(inv&1)   cout << "Smokin Joe!" << endl;
    else cout << "Oh No!" << endl;

    return 0;
}
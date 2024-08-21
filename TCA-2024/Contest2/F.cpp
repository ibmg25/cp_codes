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
    ll t, n, k, a;
    vll pn, nn;
    cin >> t;
    while(t--){
        cin >> n >> k;
        pn.clear();
        nn.clear();
        ffor(i, 0, n){
            cin >> a;
            if (a > 0) pn.pb(a);
            if (a < 0) nn.pb(-a);
        }
        sort(all(pn));
        sort(all(nn));
        ll tp = pn.size();
        ll tn = nn.size();
        ll sp = 0, sn = 0;
        if(tp > 0) sp = pn[tp-1];
        if(tn > 0) sn = nn[tn-1];
        ll ans = 0;
        if(sp >= sn){
            for(int i = k-1; i < tp-k; i += k) ans += 2*pn[i];
            if((tp-k)%k > 0){
                ans += 2*pn[(tp-k) - 1];
            }
            for(int i = k-1; i < tn; i += k) ans += 2*nn[i];
            ans += pn[tp-1];
            if((tn)%k > 0){
                ans += 2*nn[tn - 1];
            }
        }
        else{
            for(int i = k-1; i < tn-k; i += k) ans += 2*nn[i];
            if((tn-k)%k > 0){
                ans += 2*nn[(tn-k) - 1];
            }
            for(int i = k-1; i < tp; i += k) ans += 2*pn[i];
            ans += nn[tn-1];
            if((tp)%k > 0){
                ans += 2*pn[tp - 1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
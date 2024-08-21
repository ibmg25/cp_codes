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
    ll r, c, t = 2;
    string s, a;
    vector<string> v;
    bool ok[1005][105], vis[1005][105], ans = false;
    cin >> r >> c;
    cin >> s;
    ffor(i, 0, r) cin >> a, v.pb(a+a);
    while(t--){
        mem(ok, false);
        ffor(j, 0, c){
            ok[0][j] = true;
            ffor(k, 0, c){
                if(v[0][j+k] == '1' && s[k] == '1'){
                    ok[0][j] = false;
                    break;
                }
            }
        }
        queue<pll> q;
        mem(vis, false);
        ffor(j, 0, c){
            if(ok[0][j]) q.push({0, j});
        }
        while(!q.empty()){
            ll rr = q.front().F;
            ll cc = q.front().S;
            ll L = cc-1;
            ll R = cc+1;
            if(L < 0) L = c-1;
            if(R > c-1) R = 0;
            q.pop();
            ok[rr][L] = true;
            ok[rr][R] = true;
            if(rr > 0) ok[rr-1][cc] = true;
            if(rr < r-1) ok[rr+1][cc] = true;
            ffor(j, 0, c){ 
                if(v[rr][L+j] == '1' && s[j] == '1') ok[rr][L] = false;
                if(v[rr][R+j] == '1' && s[j] == '1') ok[rr][R] = false;
                if(rr > 0 && v[rr-1][cc+j] == '1' && s[j] == '1') ok[rr-1][cc] = false;
                if(rr < r-1 && v[rr+1][cc+j] == '1' && s[j] == '1') ok[rr+1][cc] = false;
            }
            if(ok[rr][L] && !vis[rr][L]) q.push({rr, L}), vis[rr][L] = true;;
            if(ok[rr][R] && !vis[rr][R]) q.push({rr, R}), vis[rr][R] = true;;
            if(rr > 0 && ok[rr-1][cc] && !vis[rr-1][cc]) q.push({rr-1, cc}), vis[rr-1][cc] = true;;
            if(rr < r-1 && ok[rr+1][cc] && !vis[rr+1][cc]) q.push({rr+1, cc}), vis[rr+1][cc] = true;;
        }
        ffor(j, 0, c) if(ok[r-1][j]) ans = true;
        if(ans) break;
        reverse(all(s));
    }
    if(ans) cout << "Y" << endl;
    else cout << "N" << endl;
    return 0;
}
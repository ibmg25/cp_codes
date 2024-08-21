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
    ll n;
    cin >> n;
    string a[5] = {"***", "*.*", "***", "*.*", "*.*"};
    string b[5] = {"***", "*.*", "***", "*.*", "***"};
    string c[5] = {"***", "*..", "*..", "*..", "***"};
    string d[5] = {"***", "*.*", "*.*", "*.*", "***"};
    string e[5] = {"***", "*..", "***", "*..", "***"};
    string s;
    cin >> s;
    string ans[5] = {"", "", "", "", ""};
    ffor(i, 0, n){
        if(s[i] == 'A'){
            ffor(i, 0, 5) ans[i] += a[i];
        }
        if(s[i] == 'B'){
            ffor(i, 0, 5) ans[i] += b[i];
        }
        if(s[i] == 'C'){
            ffor(i, 0, 5) ans[i] += c[i];
        }
        if(s[i] == 'D'){
            ffor(i, 0, 5) ans[i] += d[i];
        }
        if(s[i] == 'E'){
            ffor(i, 0, 5) ans[i] += e[i];
        }
    }
    ffor(i, 0, 5) cout << ans[i] << endl;
    return 0;
}
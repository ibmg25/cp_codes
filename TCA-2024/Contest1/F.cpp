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

int main() //IBMG WA
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n, k, c = 0, sum = 0, ans = 0, aux;
    cin >> n >> k;
    string s;
    cin >> s;
    priority_queue<ll> pq;
    ffor(i, 0, s.size()){
        if(s[i] == '0'){
            if(c > 0)
                sum += (c*(c+1))/2, pq.push(c); 
            c = 0;
        }
        else c++;
    }
    if(c > 0){
        pq.push(c);
        sum += (c*(c+1))/2;
    }
    // cout << "sum: " << sum << endl;
    while(sum > k){
        aux = pq.top();
        sum -= aux*(aux+1)/2;
        ans++;
        pq.pop();
        if(aux%2 == 1){
            ll a = (aux-1)/2;
            pq.push(a);
            pq.push(a);
            sum += a*(a+1)/2;
            sum += a*(a+1)/2;
        }
        else{
            ll a = (aux-1)/2;
            pq.push(a);
            pq.push(a + 1);
            sum += a*(a+1)/2;
            sum += (a+1)*(a+2)/2;
        } 
    }
    cout << ans << endl;
    return 0;
}
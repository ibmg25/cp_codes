#include <bits/stdc++.h>
//#include <ext/rope>

using namespace std;
//using namespace __gnu_cxx;

#define ffor(i,o,f)		   for(int i = o; i < f; i++)
#define pb 				   push_back
#define mp                 make_pair
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
#define PI 				   3.14159265358979323846264338327950
#define endl 			   '\n'
#define lcm(a,b)           (a*b)/__gcd(a,b)
typedef long long          ll;
typedef pair < int, int >  pii;
typedef vector < int >     vi;
typedef vector < pii >     vii;
typedef vector < vi > 	   gi;
typedef vector < ll >      vll;
typedef map < int, int >   mii;
const int INF = int(1e9 + 7);

// g++ contest.cpp -o a.exe
// ./a.exe

ll ans = -1;

ll maxB(ll n, ll a)
{
    ll ans = 0;
    if (n >= a)
        n -= a, ans++;
    a++;
    ans += n/a;
    return ans;
}

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n, k, a, m, p;
    set<ll> s;
    cin >> n >> k >> a;
    cin >> m;
    s.insert(0);
    s.insert(n+1);
    ll b = maxB(n, a);
    ffor(i, 1, m+1)
    {
        cin >> p;
        ll l = *prev(s.lower_bound(p));
        ll r = *s.lower_bound(p);
        b -= maxB(r-l-1, a);
        b += maxB(r-p-1, a) + maxB(p-l-1, a);
        if (ans == -1 && b < k)
            ans = i;
        s.insert(p);
    }
    cout << ans << endl;
    return 0;
}

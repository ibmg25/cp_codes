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


int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll t, n, v;
    vector<pair<ll, ll> > a; 
    vll sum;
    cin >> t;
    while(t--)
    {
        a.clear();
        sum.clear();
        cin >> n;
        ffor(i, 0, n)
            cin >> v, a.pb({v, i});
        sort(all(a));
        sum.pb(a[0].F);
        ffor(i, 1, n)
            sum.pb(a[i].F+sum[i-1]);
        ll ans = 0;
        ffor(i, 1, n)
        {
            if (a[i].F > sum[i-1])
                ans = i;
        }
        cout << n - ans << '\n';
        vll res;
        ffor(i, ans, n)
            res.pb(a[i].S+1);
        sort(all(res));
        ffor(i, 0, res.size())
            cout << res[i] << " ";
        cout << '\n';

        
    }
    return 0;
}

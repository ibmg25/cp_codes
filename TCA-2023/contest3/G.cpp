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
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n, m, ans = 0;
    vll a, b;
    cin >> n;
    ffor(i, 0, n)
        cin >> m, a.pb(m);
    ffor(i, 0, n)
        cin >> m, b.pb(a[i] - m);
    sort(all(b));
    ffor(i, 0, n-1)
    {
        if (b[i] <= 0)
            ans += n - (upper_bound(b.begin(), b.end(), -b[i]) - b.begin());
        else
            ans += n - (i+1);
    }
    cout << ans << '\n';
    return 0;
}

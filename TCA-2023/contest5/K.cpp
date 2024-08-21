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
    ll n, t;
    vll v(100005, 0), sum(100005, 0);
    cin >> n >> t;
    sum[0] = 0;
    v[0] = 0;
    ffor(i, 1, n+1)
    { 
        cin >> v[i];
        sum[i] = v[i] + sum[i-1];
    }
    ll ans = 0;
    ffor(i, 1, n+1)
    {
        ll lo = i, hi = n, mid, r = -1;
        while (lo <= hi)
        {
            mid = (lo + hi) / 2;
            if (sum[mid] - sum[i-1] <= t)
            {
                r = mid;
                lo = mid + 1;
            }
            else
                hi = mid - 1;
        }
        if (r != -1)
            ans = max(ans, r - i + 1);
    }
    cout << ans << '\n';
    return 0;
}

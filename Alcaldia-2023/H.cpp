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

ll pot(ll b, ll e)
{
    ll res = 1;
    while (e)
    {
        if (b*b > 1e9)
            return 1e15;
        if (e & 1)
            res = res * b;
            b = b*b;
            e /= 2;
    }
    return res;
}

ll flog(ll b, ll lim)
{
    ll res = 0;
    while (lim > 1)
        lim /= b, res++;
    return res;
}

int main() //IBMG
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ll n, k;
    while (cin >> n >> k && n != 0 && k != 0)
    {
        ll aux, ans = 0;
        aux = n;
        //ll lim = flog(k, 1e9);
        //cout << "lim: " << lim << endl;
        while (aux >= k)
        {
            ll lo = 0, hi = 1e9, mid, r;
            while (lo <= hi)
            {
                mid = (lo + hi) / 2;
                if (pot(k, mid) <= aux)
                {
                    r = mid;
                    lo = mid+1;
                }
                else
                    hi = mid-1;
            }
            ll res = pot(k, r);
            //cout << res << " x " << aux/res << endl;
            ans += res*(aux/res);
            aux -= res*(aux/res);
        }
        if (aux > 0)
            ans += k;
        cout << ans << endl;
    }
    return 0;
}

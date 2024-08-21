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
    ll n, t, s, a, cont = 0;
    map<ll, ll> lk;
    set<ll> ht;
    cin >> n;
    ffor(i, 0, n)
    {
        cin >> t >> s;
        if (t == 1)
        {
            cont++;
            ffor(j, 0, s)
            {
                cin >> a;
                lk[a]++;
            }
        }
        if (t == 2)
        {
            ffor(j, 0, s)
            {
                cin >> a;
                ht.insert(a);
            }
        }
    }
    if (cont == 0)
        cout << (ll)1e18 - ht.size() << '\n';
    else
    {
        ll ans = 0;
        for(auto it = lk.begin(); it != lk.end(); it++)
        {
            if (it->second == cont && !ht.count(it->first))
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}

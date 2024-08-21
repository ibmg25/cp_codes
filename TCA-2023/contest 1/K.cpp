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
    ll n, a, aux;
    vll v, t, sum, muere;
    cin >> n;
    ffor(i, 0, n)
    {
        cin >> a;
        v.pb(a);
    }
    ffor(i, 0, n)
    {
        cin >> a;
        t.pb(a);
        if (i == 0)
            sum.pb(t[i]);
        else
            sum.pb(t[i] + sum[i-1]);
    }
    ffor(i, 0, n)
    {
        ll lo = 0, hi = n-1, mid, r = 1e18;
        while (lo <= hi)
        {
            mid = (lo + hi) / 2;
            if ((i > 0 && sum[mid]-sum[i-1] >= v[i]) || (i == 0 && sum[mid] >= v[i]))
            {
                r = mid;
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }
        if ((i == 0 && v[i] < sum[i]) || (i > 0 && v[i] < sum[i] - sum[i-1]))
            r = i;
        muere.pb(r);
    }
    priority_queue<pair<ll, ll> > pq;
    ffor(i, 0, n)
    {
        pq.push({-muere[i], i});
        aux = -pq.top().F;
        ll ans = 0;
        while (aux == i && !pq.empty())
        {
            ll pos = pq.top().S;
            pq.pop();
            if (pos == 0 && i == 0)
                ans += v[pos];
            else if (pos == 0)
                ans += v[pos] - sum[i-1];
            else
                ans += v[pos] - (sum[i-1]-sum[pos-1]);
            aux = -pq.top().F;
        }
        ans += pq.size() * t[i];
        cout << ans << " ";
    }
    cout << '\n';
    return 0;
}
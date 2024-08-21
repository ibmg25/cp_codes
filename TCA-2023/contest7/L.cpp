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
    int t, k, n, m, v;
    cin >> t;
    while (t--)
    {
        cin >> k >> n >> m;
        vi a, b, ans;
        ffor(i, 0, n)
            cin >> v, a.pb(v);
        ffor(i, 0, m)
            cin >> v, b.pb(v);
        bool ok = true;
        int cont = 0, posA = 0, posB = 0;
        while (ok && cont < n+m)
        {
            if(posA < n && a[posA] <= k)
            {
                if (a[posA] == 0)
                    k++;
                ans.pb(a[posA]), posA++, cont++;
            }
            if(posB < m && b[posB] <= k)
            {
                if (b[posB] == 0)
                    k++;
                ans.pb(b[posB]), posB++, cont++;
            }
            if (cont == n+m)
                break;
            if (((posA < n && a[posA] > k) || (posA >= n)) && ((posB < m && b[posB] > k) || (posB >= m)))
                ok = false;
            //cout << posA << " " << posB << endl;
        }
        if (!ok)
            cout << -1 << '\n';
        else
        {
            ffor(i, 0, n+m)
                cout << ans[i] << " ";
            cout << '\n';
        }
    }
    return 0;
}

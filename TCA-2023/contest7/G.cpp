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
    int t, n;
    int mat[1005][5];
    cin >> t;
    while (t--)
    {
        cin >> n;
        ffor(i, 0, n)
        {
            ffor(j, 0, 5)
                cin >> mat[i][j];
        }
        string ans = "NO";
        ffor(i, 0, 5)
        {
            ffor(j, i+1, 5)
            {
                int c1 = 0, c2 = 0, c3 = 0;
                ffor(k, 0, n)
                {
                    if (mat[k][i] == 1 && mat[k][j] == 1)
                        c3++;
                    else if (mat[k][i] == 1)
                        c1++;
                    else if (mat[k][j] == 1)
                        c2++;
                }
                if (c3 >= max(0, (n/2-c1)))
                {
                    c3 -= max(0, (n/2-c1));
                    if (c3 >= (n/2-c2))
                        ans = "YES";
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

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
    int n, m, ans = 0;
    char mat[55][55];
    set<char> s;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cin >> mat[i][j];
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < m-1; j++)
        {
            //cout << i << " --- " << j << endl;
            s.clear();
            s.insert(mat[i][j]);
            s.insert(mat[i][j+1]);
            s.insert(mat[i+1][j]);
            s.insert(mat[i+1][j+1]);
            if (s.count('f') && s.count('a') && s.count('c') && s.count('e'))
                ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}

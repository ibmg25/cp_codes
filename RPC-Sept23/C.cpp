#include <bits/stdc++.h>
//#include <ext/rope>
 
using namespace std;
//using namespace __gnu_cxx;
 
#define ffor(i,o,f)        for(int i = o; i < f; i++)
#define bfor(i,f,o)        for(int i = f; i >= o, i--)
#define pb                 push_back
#define pf                 push_front
#define all(a)             (a).begin(), (a).end()
#define F                  first
#define S                  second
#define PI                 acos(-1)
#define endl               '\n'
#define lcm(a,b)           (a*b)/__gcd(a,b)
#define mem(a, h)          memset(a, (h), sizeof(a))
#define setp(a)            fixed << setprecision(a)
typedef long long          ll;
typedef long double        ld;  
typedef pair < int, int >  pii;
typedef pair < ll, ll >    pll;
typedef vector < int >     vi;
typedef vector < pii >     vii;
typedef vector < vi >      gi;
typedef vector < ll >      vll;
typedef map < int, int >   mii;
const int INF = int(1e9 + 7);
const int MOD = 998244353;
const double EPS = double(1e-9);
const int tam = 200005;

int main() //IBMG
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    int n, a = 1, f, c, p = 1;
    char mat[20][20];
    string s;
    cin >> n;
    cin >> s;
    f = n/2;
    c = n/2;
    int t = s.size();
    mem(mat, '#');
    mat[f][c] = s[0];
    while(p < t){
        while(p < t && n/2-f < a){
            f--;
            mat[f][c] = s[p];
            p++;
        }
        while(p < t && c-n/2 < a){
            c++;
            mat[f][c] = s[p];
            p++;
        }
        while(p < t && f-n/2 < a){
            f++;
            mat[f][c] = s[p];
            p++;
        }
        while(p < t && n/2-c < a){
            c--;
            mat[f][c] = s[p];
            p++;
        }
        a++;
    }
    ffor(i, 0, n){
        ffor(j, 0, n){
            if (mat[i][j] != '#')   
                cout << mat[i][j];
        }
    }
    cout << endl;
    return 0;
}
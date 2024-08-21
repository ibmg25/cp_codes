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

int x, y, ans, dis;
int xo, yo;
bool ok;
char m[1005][1005];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
queue<pair<int, pair<int, int> > > q;

void floodfill(int a, int b)
{
    m[a][b] = 'v';
    q.push({0, {a, b}});
    while (!q.empty())
    {
        a = q.front().S.F;
        b = q.front().S.S;
        int c = q.front().F;
        //cout << a << " " << b << " " << c << endl;
        q.pop();
        if (a == 0 || a == y-1 || b == 0 || b == x-1)
        {
            ans = min(ans, c);
            ok = true;
        }
        for(int i = 0; i < 4; i++)
        {
            if (a+dx[i] >= 0 && a+dx[i] < y && b+dy[i] >= 0 && b+dy[i] < x && m[a+dx[i]][b+dy[i]] == '+')
            {
                q.push({c+1, {a+dx[i], b+dy[i]}});
                m[a+dx[i]][b+dy[i]] = 'v';
            }
        }   
    }
}

int main() //IBMG
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    while (cin >> x >> y && x != 0 && y != 0)
    {
        ans = 1e9;
        dis = 0;
        ok = false;
        for(int i = 0; i < y; i++)
        {
            for(int j = 0; j < x; j++)
            {
                cin >> m[i][j];
                if (m[i][j] == 'X')
                {
                    xo = i;
                    yo = j;
                }
            }
        }
        floodfill(xo, yo);
        if (!ok)
            ans = -1;
        cout << ans << '\n';
    }
    return 0;
}
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
    int n;
    string a;
    map<string, string> m;
    m["red"] = "Reality";
    m["purple"] = "Power";
    m["green"] = "Time";
    m["blue"] = "Space";
    m["yellow"] = "Mind";
    m["orange"] = "Soul";
    set<string> s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        s.insert(a);
    }
    cout << 6-n << '\n';
    for(auto it = m.begin(); it != m.end(); it++)
    {
        if (!s.count(it->first))
            cout << it->second << '\n';
    }
    return 0;
}

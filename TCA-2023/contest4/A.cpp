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
    set<pair<string, int> > s1, s2;
    int n, a, pos = 0;
    vector<bool> ok;
    string s;
    cin >> n;
    ffor(i, 0, n)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> s;
            int tam = s.size();
            ffor(i, 4, tam)
            {
                s1.insert({s.substr(0, i+1), pos});
                ok.pb(1); 
                reverse(all(s));
                s2.insert({s.substr(0, i+1), pos});
                reverse(all(s));
                pos++;
            }
        }
        else if (a == 2)
        {
            cin >> s;
            int tam = s.size();
            if (tam < 5)
            {
                bool ans = false;
                for(auto it = s1.begin(); it != s1.end(); it++)
                {
                    string ss = it->first;
                    //cout << "ss: " <<  ss << endl;
                    if(s == ss.substr(0, tam) && it->second == 0)
                        ans = true;
                }
                cout << ans << '\n';
            }
            else
                cout << s1.count(s) << '\n';

                
            if (tam < 5)
            {
                bool ans = false;
                for(auto it = s2.begin(); it != s2.end(); it++)
                {
                    string ss = *it;
                    //cout << "ss2: " << ss << endl;
                    if(s == ss.substr(0, tam))
                        ans = true;
                }
                cout << ans << '\n';
            }
            else
                cout << s2.count(s) << '\n';
        }
        else
        {
            ffor(i, 0, rev.size())
                rev[i] = !rev[i];
        }
    }
    return 0;
}

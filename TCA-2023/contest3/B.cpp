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
    int n, x;
    string s;
    priority_queue<int> pq;
    vector<string> ans;
    vi nums;
    cin >> n;
    ffor(i, 0, n)
    {
        cin >> s;
        if (s == "insert")
        {
            cin >> x;
            pq.push(-x);
            ans.pb("insert ");
            nums.pb(x);
            //cout << s << " " << x << '\n';
        }
        if (s == "getMin")
        {
            cin >> x;
            int v;
            if (!pq.empty())
                v = -pq.top();
            while (!pq.empty() && v < x)
            {
                pq.pop();
                if (!pq.empty())
                    v = -pq.top();
                ans.pb("removeMin");
                //cout << "removeMin" << '\n';
            }
            if (pq.empty() || v > x)
            {
                ans.pb("insert ");
                nums.pb(x);
                //cout << "insert " << x << '\n';
                pq.push(-x);
            }
            ans.pb("getMin ");
            nums.pb(x);
            //cout << "getMin " << x << '\n';
        }
        if (s == "removeMin")
        {
            if (pq.empty())
            {
                ans.pb("insert ");
                nums.pb(1);
                pq.push(-1);
            }
            ans.pb("removeMin");
            //cout << "removeMin" << '\n';
            pq.pop();
        }

    }
    int pos = 0;
    cout << ans.size() << '\n';
    ffor(i, 0, ans.size())
    {
        cout << ans[i];
        if (ans[i] != "removeMin")
            cout << nums[pos], pos++;
        cout << '\n';
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n;
    string s;
    cin>>t;
    while(t--)
    {
        int ab = 0, ans = 0;
        cin>>n;
        cin>>s;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                ab++;
            }
            else
            {
                ab--;
                if(ab < 0)
                {
                   ab = 0;
                   ans+= 1; 
                }
            }
        }
        cout<<ans<<"\n";
    }
}
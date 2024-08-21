#include <bits/stdc++.h>
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define int long long int

using namespace std;

int32_t main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string name; 
    cin>>name; 

    if(name[0] >= 'A' and name[0] <= 'Z') name[0] = char((name[0] - 'A')+ 'a') ;

    string tmp = name; 
    reverse(all(tmp)); 
    if(is_sorted(all(name)) or is_sorted(all(tmp))) cout<<"yes"<<endl;
    else cout<<"no"<<endl; 

    return 0;
}
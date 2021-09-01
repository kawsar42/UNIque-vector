#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
ll n;
cin >> n;
vector<ll>v(n*2-1);
for(ll i=0;i<(n*2-1);i++)
{
    cin >> v[i];
}
sort(v.begin(),v.end());
v.erase(unique(v.begin(),v.end()),v.end());
for(ll i=0;i<v.size();i++)
{
    cout << v[i] << " ";
}
cout << endl;
/*
if(n==v.size())
    cout << "I become the guy." << endl;
else cout << "Oh, my keyboard!" << endl;*/

}
int main()
{
    solve();
    return 0;
}

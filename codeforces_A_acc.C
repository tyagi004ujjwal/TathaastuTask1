#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll ans=100000000000;
    for(ll i=1;i<n;++i)
    {
        ans=min(ans,abs(a[i]-a[i-1]));
    }
    ll count=0;
    for(ll i=1;i<n;++i)
    {
        if(abs(a[i]-a[i-1])==ans)
        {
            count++;
        }
    }
    cout<<ans<<" "<<count;
    return 0;
}
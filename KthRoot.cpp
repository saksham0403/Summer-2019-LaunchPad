#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll powerr(ll a,ll b)
{
    ll ans=1;
    while(b>0)
    {
        ll temp = b&1;
        if(temp==1)
        {
            ans=ans*a;
        }
        a=a*a;
        b=b>>1;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        ll n;
        cin>>n;
        int k;
        cin>>k;
        ll i=1;
        if(k==1)
        {
            cout<<n<<"\n";
            continue;
        }
        ll l=1;
        ll r=n;
        ll ans;
        while(l<=r)
        {
            ll mid =(l+r)/2;
            if(pow(mid,k)<=n)
            {
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        cout<<ans<<"\n";

    }
}

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        ll num;
        cin>>num;
        auto *it = lower_bound(a,a+n,num);
        if(*it == num)
        {
            cout<<"Yes "<<it-a+1<<"\n";
        }
        else{
            cout<<"No "<<it-a+1<<"\n";
        }
    }
}

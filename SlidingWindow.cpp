#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void brute(ll *p,ll n,ll k)
{

    for(ll i=0;i<=n-k;i++)
    {
        ll ma=INT_MIN;
        for(ll j=0;j<k;j++)
        {
            if(p[i+j]>ma)
            {
                ma=p[i+j];
            }
        }
        cout<<ma<<" ";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
    cin>>n;
    ll p[n];
    ll k;
    cin>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>p[i];
    }
    deque<ll> q(k);
    ll i;
    for(i=0;i<k;i++)
    {
        while(!q.empty() && p[i]>=p[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    for(;i<n;i++)
    {
        cout<<p[q.front()]<<" ";
        while(!q.empty() &&(q.front()<=i-k))
        {
            q.pop_front();
        }
        while(!q.empty() && p[i]>=p[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);

    }
    cout<<p[q.front()]<<"\n";
    q.clear();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

bool placecows(int stalls[],int n,int c,int sep)
{
    int last = stalls[0];
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(stalls[i]-last >= sep)
        {
            last = stalls[i];
            cnt++;
            if(cnt==c)
                return true;
        }
    }
    return false;
}

int main()
{
    int n,c;
    cin>>n>>c;
    int stalls[n];
    for(int i=0;i<n;i++)
        cin>>stalls[i];
    sort(stalls,stalls+n);
    int s=0;int e = stalls[n-1]-stalls[0];

    int ans = 0;
    while(s<=e)
    {
        int mid = (s+e)/2;
        bool canplace = placecows(stalls,n,c,mid);

        if(canplace)
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }


    }
    cout<<ans<<endl;



}

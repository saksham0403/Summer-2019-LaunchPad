#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int key,i;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    int start=0;
    int endindex=sizeof(a)/sizeof(int)-1;
    while(start<endindex)
    {
        int sum=a[start]+a[endindex];
        if(sum==key)
        {
            cout<<a[start]<<" and "<<a[endindex]<<"\n";
            start++;
            endindex--;
        }
        else if(sum>key)
        {
            endindex--;
        }
        else if(sum<key)
        {
            start++;
        }

    }

}

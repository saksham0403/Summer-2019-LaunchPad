#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=0;
    int j=n-1;
    int b=1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            b=0;
        }
        i++;
        j--;
    }
    if(b==1)
    {
        cout<<"true";
    }
    else cout<<"false";
}

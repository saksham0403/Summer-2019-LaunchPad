#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,a[n+1]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a,a+n);
    int m;
    cin>>m;
    int b[m+1]={0};
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    reverse(b,b+m);
    int j=0;
    i=0;
    int carry=0;
    if(m>=n)
    {
        while(i<n+1 && j<m+1)
        {
            int sum=a[i]+b[j]+carry;
            if(sum>=10)
            {
                sum=sum-10;
                b[j]=sum;
                carry=1;
            }
            else{
                b[j]=sum;
                carry=0;
            }
            i++;
            j++;

        }
        while(j<m+1)
        {
            int sum=b[j]+carry;
            if(sum>=10)
            {
                sum=sum-10;
                b[j]=sum;
                carry=1;
            }
            else{
                b[j]=sum;
                carry=0;
            }
            j++;
        }
        if(carry==1)
        {
            b[j]=carry;
        }
        reverse(b,b+m+1);
        if(b[0]==0)
        {
            for(i=1;i<m+1;i++)
            {
                cout<<b[i]<<", ";
            }
        }
        else{
            for(i=0;i<m+1;i++)
            {
                cout<<b[i]<<", ";
            }
        }
    }
    else{
        while(i<n+1 && j<m+1)
        {
            int sum=a[i]+b[j]+carry;
            if(sum>=10)
            {
                sum=sum-10;
                a[i]=sum;
                carry=1;
            }
            else{
                a[i]=sum;
                carry=0;
            }
            i++;
            j++;

        }
        while(i<n+1)
        {
            int sum=a[i]+carry;
            if(sum>=10)
            {
                sum=sum-10;
                a[i]=sum;
                carry=1;
            }
            else{
                a[i]=sum;
                carry=0;
            }
            i++;
        }
        if(carry==1)
        {
            a[i]=carry;
        }
        reverse(a,a+n+1);
        if(a[0]==0)
        {
            for(i=1;i<n+1;i++)
            {
                cout<<a[i]<<", ";
            }
        }
        else{
            for(i=0;i<n+1;i++)
            {
                cout<<a[i]<<", ";
            }
        }
    }
    cout<<"END";

}

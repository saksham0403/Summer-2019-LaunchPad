#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    int i,j;
    int a1[100],b1[100];
    int c1=0,c2=0;

    while(a>0)
    {
        int right=a%10;
        a1[c1++]=right;
        a=a/10;
    }
    reverse(a1,a1+c1);
    while(b>0)
    {
        int right=b%10;
        b1[c2++]=right;
        b=b/10;
    }
    reverse(b1,b1+c2);
    if(c1<c2)
    {
        for(i=c1;i<c2;i++)
        {
            a1[i]=0;
        }
    }
    else{
        for(i=c2;i<c1;i++)
        {
            b1[i]=0;
        }
    }
    j=0;
    i=0;
    if(c1>c2)
    {
        while(i<c1 && j<c1)
        {
            if(a1[i]>b1[j])
            {
                return true;
            }
            else if(a1[i]<b1[j])
            {
                return false;
            }
            else{
                i++;
                j++;
                }
        }
    }
    else{
        while(i<c2 && j<c2)
        {
            if(a1[i]>b1[j])
            {
                return true;
            }
            else if(a1[i]<b1[j])
            {
                return false;
            }
            else{
                i++;
                j++;
                }
        }
    }


}

int main()
{
        int n;
        cin>>n;
	    int a[n];
	    int i;
	    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //sort(a,a+n,compare);
        for(i=0;i<n;i++)
        {
            cout<<a[i];
        }
}

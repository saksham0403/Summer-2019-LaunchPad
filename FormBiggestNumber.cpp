#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
    int i,j;
    int a1[100],b1[100];
    int c1=0,c2=0;
    int n;

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
    j=0;
    i=0;
    while(i<c1 && j<c2)
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
                if(i+1==c1&& j+1!=c2)
                {
                    j++;
                }
                else if(i+1!=c1 && j+1==c2)
                {
                    i++;
                }
                else if( i+1!=c1 && j+1!=c2)
                {
                    i++;
                    j++;
                }

                }
        }



}

int main()
{
	int t;
	cin >> t;
	for(int q = 0 ; q < t ; q++)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int i;
	    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,compare);
        for(i=0;i<n;i++)
        {
            cout<<a[i];
        }

	}

	return 0;
}

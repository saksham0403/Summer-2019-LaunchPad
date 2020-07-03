#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int coun=0,i=0,j;
    while(i<a.length())
    {
        coun=1;
        j=i+1;
        while(j<a.length())
        {
            if(a[j]==a[i])
            {
                coun++;
                j++;
            }
            else break;
        }
        cout<<a[i]<<coun;
        i=j;
    }
}

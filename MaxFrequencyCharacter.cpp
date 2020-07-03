#include<bits/stdc++.h>
using namespace std;
//ould have done using countsort alsoo

int main()
{
    string a;
    cin>>a;
    int coun=INT_MIN;
    char ans;
    for(int i=0;i<a.length();i++)
    {
        char c=a[i];
        int temp=count(a.begin(),a.end(),c);
        if(temp>coun)
        {
            coun=temp;
            ans=c;
        }
    }
    cout<<ans;
}

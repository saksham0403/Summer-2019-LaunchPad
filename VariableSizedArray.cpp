#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a(n);
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        int si;
        cin>>si;
        for(int j=0;j<si;j++)
        {
            int num;
            cin>>num;
            a[i].push_back(num);
        }
    }
    for(int q=0;q<k;q++)
    {
        int i,j;
        cin>>i>>j;
        cout<<a[i][j]<<"\n";

    }
}

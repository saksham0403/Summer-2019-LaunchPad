#include<iostream>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll result=0;
    ll pow=1;
    while(n>0)
    {
        ll right=n%10;
        if((9-right)<right)
        {
            right=9-right;
        }
        if(n/10==0 && right==0)
        {
            right=9;

        }
        result=result+pow*right;
        pow=pow*10;
        n=n/10;

    }
    cout<<result;
}

#include<iostream>
#include<climits>
using namespace std;

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
    int counter;
    int sum=INT_MIN;
    int j;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int b=0;
            for(counter=i;counter<=j;counter++)
            {
                b=b+a[counter];
            }
            if(b>sum)
            {
                sum=b;
            }
        }
    }
    cout<<"MAXIMUM SUBARRAY SUM ="<<sum;
}


#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int cumSum[n]={0};

    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        cumSum[i]=sum;
    }
    int maxSum=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int csum=0;
            if(i==0)
            {
                csum = cumSum[j];
            }
            else
            {
                csum = cumSum[j]-cumSum[i-1];
            }
            if(csum>maxSum)
            {
                maxSum=csum;
            }
        }
    }
    cout<<"MAXIMUM SUBARRAY SUM ="<<maxSum;
}


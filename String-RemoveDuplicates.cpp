#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[1000];
    cin.getline(a,1000);
    int i,j,coun;
    for(i=0;a[i]!='\0';i++)
    {
        coun=0;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[j]==a[i])
            {
                coun++;
            }
            else
            {
                break;
            }
        }
        if(a[j]=='\0')
            {
                break;
            }
        if(coun>0)
        {
            for(;a[j]!='\0';j++)
            {
                a[j-coun]=a[j];
            }
            a[j-coun]='\0';
        }
    }
    a[i+1]='\0';
    cout<<a;
}

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string a;
    cin>>a;
    for(int i=0;i<a.length()-1;i=i+2)
    {
        string num=to_string(a[i+1]-a[i]);
        string temp1=a.substr(0,i+1);
        string temp2=a.substr(i+1);
        a=temp1+num+temp2;
        //i++;
    }



    cout<<a;
}

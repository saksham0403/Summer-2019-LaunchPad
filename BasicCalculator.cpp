#include<iostream>
using namespace std;

int main()
{
    char a;
    cin>>a;
    int n1,n2;
    while(a!='X' && a!='x')
    {
        if(a=='+')
        {
            cin>>n1>>n2;
            cout<<n1+n2<<"\n";
        }
        else if(a=='-')
        {
            cin>>n1>>n2;
            cout<<n1-n2<<"\n";
        }
        else if(a=='/')
        {
            cin>>n1>>n2;
            cout<<n1/n2<<"\n";
        }
        else if(a=='*')
        {
            cin>>n1>>n2;
            cout<<n1*n2<<"\n";
        }
        else if(a=='%')
        {
            cin>>n1>>n2;
            cout<<n1%n2<<"\n";
        }
        else
        {
            cout<<"Invalid operation. Try again.";
        }
        cin>>a;
    }
}

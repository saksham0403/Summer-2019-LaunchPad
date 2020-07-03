#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string a)
{
    int i;
    stack<char> s1;
    for(i=0;i<a.length();i++)
    {
        char c = a[i];
        if(c =='{' || c =='['||c=='(')
        {
            s1.push(c);
        }
        else if(c=='}' && s1.top()=='{')
            {
                s1.pop();
            }
        else if(c==']'&& s1.top()=='[')
        {
            s1.pop();
        }
        else if(c==')'&& s1.top()=='(')
        {
            s1.pop();
        }
        else{
            return false;
        }

    }
    if(s1.empty())
    {
        return true;
    }
}

int main()
{
    string a;
    cin>>a;
    if(isBalanced(a))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

}

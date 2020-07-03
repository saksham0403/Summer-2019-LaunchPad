#include<bits/stdc++.h>
using namespace std;

template<typename T>
class stck
{
    vector<T> v;
public:
    void push(T data)
    {
        v.push_back(data);
    }
    bool isEmpty()
    {
        return v.empty();
    }
    T top()
    {
        if(v.empty()==false)
        return v.back();
        else{
            cout<<"The stack is empty\n";
            return -999;
        }
    }
    void pop()
    {
        if(v.empty()==false)
        v.pop_back();
        else
        {
            cout<<"The stack is empty\n";
        }
    }
};

int main()
{
    stck<char> s1;
    s1.push('a');
    cout<<s1.top();
    s1.pop();
    cout<<s1.top();
}

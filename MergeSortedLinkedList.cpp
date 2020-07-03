#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class List
{
    public:
    int data;
    List *next;
};
void disp(List *start)
{
    if(start==NULL){
        cout<<"List is empty";
        return ;
    }
    List *curr = start;
    while(curr->next!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<curr->data;
}
List* addfront(List *start,int data)
{

    List *temp=new List();
    temp->data=data;
    temp->next=NULL;
    if(start==NULL){
            start=temp;
    return start;

    }
    temp->next=start;
    start=temp;
    return start;
}


List* addrear(List *start,int data)
{
    List *temp=new List;
    temp->data=data;
    temp->next=NULL;
    if(start==NULL){
            start=temp;
    return start;

    }
    List *curr=start;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return start;

}

List* merg(List *s1,List *s2)
{
    List *s3,*tail;
    if(s1->data<s2->data)
    {
        s3=s1;
        s1=s1->next;
    }
    else
    {
        s3=s2;
        s2=s2->next;
    }
    tail=s3;
    while(s1!=NULL && s2!=NULL)
    {
        if(s1->data<s2->data)
        {
            tail->next=s1;
            s1=s1->next;
        }
        else{
            tail->next=s2;
            s2=s2->next;
        }
        tail=tail->next;
    }
    if(s2==NULL)
    {
        tail->next=s1;
    }
    else if(s1==NULL)
    {
        tail->next=s2;
    }
    return s3;

}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        List *s1=NULL,*s2=NULL,*s3=NULL;
        ll n,m;
        cin>>n;
        for(ll i =0;i<n;i++)
        {
            ll num;
            cin>>num;
            s1=addrear(s1,num);
        }
        cin>>m;
        for(ll i =0;i<m;i++)
        {
            ll num;
            cin>>num;
            s2=addrear(s2,num);
        }
        s3=merg(s1,s2);
        disp(s3);
        cout<<"\n";
    }
}

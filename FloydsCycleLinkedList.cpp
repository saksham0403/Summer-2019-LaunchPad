#include<bits/stdc++.h>
using namespace std;
class List
{
    public:
    int data;
    List *next;
};

void display(List *start)
{
    if(start==NULL){
        cout<<"Empty";
        return;
    }
    List *curr=start;
    //cout<<"\n";
    while(curr->next!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<curr->data;
    cout<<"\n";
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

bool isCycle(List *start)
{
    List *slow,*fast;
    slow=fast=start;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}

List* removeCycle(List* start)
{

    List *slow,*fast;
    slow=fast=start;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            slow=start;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            while(fast->next!=slow)
            {
                fast=fast->next;
            }
            fast->next=NULL;
        }
    }
    return start;
}


int main()
{
    List *start=NULL;
    start=addrear(start,10);
    start=addrear(start,20);
    start=addrear(start,30);
    start=addrear(start,40);
    start=addrear(start,50);
    start=addrear(start,60);
    List *curr=start;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=start->next;
    start=removeCycle(start);
    display(start);
}

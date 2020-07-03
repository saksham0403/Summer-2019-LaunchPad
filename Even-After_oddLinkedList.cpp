#include<iostream>
using namespace std;
class List
{
    public:
    int data;
    List *next;
};

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


int lengthLL(List *start)
{
    List *curr = start;
    int len=0;
    while(curr!=NULL)
    {
        len++;
        curr=curr->next;
    }
    return len;
}

List* sor(List *start)
{
    int len=lengthLL(start);
    for(int i=0;i<len;i++)
    {
        List *curr=start;
        for(int j=0;j<len-i-1;j++)
        {
            if(curr->data%2==0 && curr->next->data%2==1)
            {
                int temp=curr->data;
                curr->data=curr->next->data;
                curr->next->data=temp;
            }
            curr=curr->next;
        }
    }
    return start;

}
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
int main()
{
    List *start=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        start=addrear(start,data);
    }
    start=sor(start);
    display(start);

}


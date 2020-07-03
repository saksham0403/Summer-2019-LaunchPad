 #include<iostream>
using namespace std;
class List
{
    public:
    int data;
    List *next;
};
List* revers(List *start)
{
    if(start==NULL || start->next==NULL)
    {
        return start;
    }
    List *prev=NULL;
    List *pres=start;
    List *agla=pres->next;
    while(pres!=NULL)
    {
        pres->next=prev;
        prev=pres;
        pres=agla;
        if(agla==NULL)
        {
            break;
        }
        agla=agla->next;

    }
    start=prev;
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
bool isPalin(List *start,List *start1)
{
    if(start->next==NULL)
    {
        return true;
    }
    List *c1=start,*c2=start1;
    while(c1!=NULL && c2!=NULL)
    {
        if(c1->data!=c2->data)
        {
            return false;
        }
        c1=c1->next;
        c2=c2->next;
    }
    return true;
}

int main()
{
    List *start=NULL;
    List *start1=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        start=addrear(start,data);
        start1=addrear(start1,data);
    }
    start1=revers(start1);
    if(isPalin(start,start1))
    {
        cout<<"True";
    }
    else cout<<"False";
}

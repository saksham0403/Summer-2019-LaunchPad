#include<bits/stdc++.h>
using namespace std;

bool staircaseSearch(int a[][100],int row, int col,int n)
{
    int i=0,j=col-1;
    int b=0;
    while(i<row && j<col)
    {
        if(a[i][j]==n)
        {
            b=1;
            break;
        }
        else if(a[i][j]>n)
        {
            j--;
        }
        else i++;
    }
    if(b==1)
    {
        return true;
    }
    else return false;
}

int main()
{
    int a[100][100];
    int row,col;
    cin>>row>>col;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    int num;
    cin>>num;
    if(staircaseSearch(a,row,col,num))
    {
        cout<<"1";
    }
    else cout<<"0";

}

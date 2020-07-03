#include<bits/stdc++.h>
using namespace std;

void spiralprint(int a[][100],int row, int col)
{
    int srow = 0;
    int scol = 0;
    int erow = row-1;
    int ecol = col-1;
    int i,j;
    while(srow<=erow && scol<=ecol)
    {
        for(i=srow;i<=erow;i++)
        {
            cout<<a[i][scol]<<", ";
        }
        scol++;
        for(i=scol;i<=ecol;i++)
        {
            cout<<a[erow][i]<<", ";
        }
        erow--;
        for(i=erow;i>=srow;i--)
        {
            cout<<a[i][ecol]<<", ";
        }
        ecol--;
        for(i=ecol;i>=scol;i--)
        {
            cout<<a[srow][i]<<", ";
        }
        srow++;
    }
    cout<<"END";
}

int main()
{
    int row,col;
    cin>>row>>col;
    int a[100][100];
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    spiralprint(a,row,col);

}


#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    int a[row][col];
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            if(i%2==0)
            {
                cout<<a[j][i]<<", ";
            }
            else cout<<a[row-j-1][i]<<", ";

        }
    }
    cout<<"END";

}

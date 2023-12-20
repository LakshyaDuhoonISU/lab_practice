#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows to print: ";
    cin>>n;
    while (n<=0)
    {
        cout<<"Invalid number!Enter a valid number: ";
        cin>>n;
    }
    for (int i=0;i<n;i++)
    {
        for (int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for (int k=0;k<2*i+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int rows,cols;double sum=0;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;
    int arr[rows][cols];
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            cout<<"Enter element of "<<i+1<<" row and "<<j+1<<" column element: ";
            cin>>arr[i][j];
        }
    }
    cout<<"Array: "<<endl;
    for (int i=0;i<rows;i++)
    {
        cout<<"|";
        for (int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<", ";
        }
        cout<<"|"<<endl;
    }
    for (int i=0;i<rows;i++)
    {
        sum=0;
        for (int j=0;j<cols;j++)
        {
            sum+=arr[i][j];
        }
        cout<<"Sum of "<<i+1<<" row: "<<sum<<endl;
    }
    return 0;
}
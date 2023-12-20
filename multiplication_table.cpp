#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Multiplication Table of "<<n<<": "<<endl;
    int i=1;
    while(i<=10)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
    return 0;
}
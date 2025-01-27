//for square pattern
#include<iostream>
using namespace std;
int main()
{
    int n;//number of rows
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=1;//first row
    while(i<=n)//first row to nth row
    {
        int j=1;//for columns
        while(j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}


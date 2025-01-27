// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     if(a>0)
//     {
//         cout<<"A is positive number"<<endl;
//     }
//     else if(a<0)
//     {
//         cout<<"A is negative number"<<endl;
//     }
//     else
//     {
//         cout<<"A is zero"<<endl;
//     }    
// }

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character: "<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<"This is lowercase"<<endl;
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"This is uppercase"<<endl;
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"This is the number"<<endl;
    }
    else
    {
        cout<<"This is special character"<<endl;
    }
    return 0;
}
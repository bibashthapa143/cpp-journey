#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    if(n>0)
    {
        cout<<"\n"<<n<<" is positive number."<<endl;
    }
    else if(n<0)
    {
        cout<<"\n"<<n<<" is Negative number."<<endl;
    }
    else{
        cout<<"\n"<<n<<" is Zero"<<endl;
    }
    if(n==0)
    {
        cout<<"\n"<<n<<" is neither odd nor even"<<endl;
    }
    else if(n%2==0)
    {
        cout<<"\n"<<n<<" is an even number."<<endl;
    }
    else
    {
        cout<<"\n"<<n<<" is an odd number."<<endl;
    }





    return 0;
}
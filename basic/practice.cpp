#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"You Entered:"<<a<<" and "<<b;
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    int div=a/b;
    cout<<"\nsum is: "<<sum;
    cout<<"\nsubtraction is: "<<sub;
    cout<<"\nmltiplication is: "<<mul;
    cout<<"\ndivision is: "<<div;

    for(int i=0;i<=5;i++)
    {
        printf("\t*");
    }




    return 0;
}
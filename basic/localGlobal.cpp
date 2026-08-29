#include<iostream>
using namespace std;
int x=20;  //global variable
int main()
{
    int y=5;
    int x=10;   //Local varaible
    cout<<"Value of global variable x: "<<x<<endl;  
    cout<<"Value of local variable y: "<<y<<endl;
    return 0;
}
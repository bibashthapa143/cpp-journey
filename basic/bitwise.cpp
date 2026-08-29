#include<iostream>
using namespace std;
int main()
{
    int a=5,b=3;
    cout<<"a & b = "<<(a & b)<<endl;  //bitwise AND
    cout<<"a | b = "<<(a | b)<<endl;  //bitwise OR
    cout<<"a ^ b = "<<(a ^ b)<<endl;  //bitwise XOR
    cout<<"~a = "<<(~a)<<endl;        //bitwise NOT
    cout<<"a << 1 = "<<(a << 1)<<endl; //left shift
    cout<<"b >> 1 = "<<(b >> 1)<<endl; //right shift
    return 0;
}
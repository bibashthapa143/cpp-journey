#include<iostream>
using namespace std;

int main()
{
    // what is pointer?
    // --->data type which holds the address of other

    int a=3;
    int* b = &a;
    cout<<b<<endl;
    cout<<&a<<endl;
    // & ---> Address of operator
    // * ---> (Value at )Dereference operator
    cout<<*b<<endl;





    return  0;


}